/****************************************************************************

  (c) SYSTEC electronic GmbH, D-07973 Greiz, August-Bebel-Str. 29
      www.systec-electronic.com

  Project:      openPOWERLINK

  Description:  source file for kernel PDO module

  License:

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

    3. Neither the name of SYSTEC electronic GmbH nor the names of its
       contributors may be used to endorse or promote products derived
       from this software without prior written permission. For written
       permission, please contact info@systec-electronic.com.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
    CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
    ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
    POSSIBILITY OF SUCH DAMAGE.

    Severability Clause:

        If a provision of this License is or becomes illegal, invalid or
        unenforceable in any jurisdiction, that shall not affect:
        1. the validity or enforceability in that jurisdiction of any other
           provision of this License; or
        2. the validity or enforceability in other jurisdictions of that or
           any other provision of this License.

  -------------------------------------------------------------------------

                $RCSfile$

                $Author$

                $Revision$  $Date$

                $State$

                Build Environment:
                    GCC V3.4

  -------------------------------------------------------------------------

  Revision History:

  2006/05/22 d.k.:   start of the implementation, version 1.00

****************************************************************************/

#include "kernel/EplPdok.h"
#include "kernel/EplPdokCal.h"
#include "kernel/EplEventk.h"
#include "EplObd.h"

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_PDOK)) != 0)

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_DLLK)) == 0)

    #error 'ERROR: Missing DLLk-Modul!'

#endif


/***************************************************************************/
/*                                                                         */
/*                                                                         */
/*          G L O B A L   D E F I N I T I O N S                            */
/*                                                                         */
/*                                                                         */
/***************************************************************************/

//---------------------------------------------------------------------------
// const defines
//---------------------------------------------------------------------------

#define EPL_PDOK_OBD_IDX_RX_COMM_PARAM  0x1400
#define EPL_PDOK_OBD_IDX_RX_MAPP_PARAM  0x1600
#define EPL_PDOK_OBD_IDX_TX_COMM_PARAM  0x1800
#define EPL_PDOK_OBD_IDX_TX_MAPP_PARAM  0x1A00

//---------------------------------------------------------------------------
// local types
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// modul globale vars
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// local function prototypes
//---------------------------------------------------------------------------


/***************************************************************************/
/*                                                                         */
/*                                                                         */
/*          C L A S S  EplPdok                                             */
/*                                                                         */
/*                                                                         */
/***************************************************************************/
//
// Description:
//
//
/***************************************************************************/


//=========================================================================//
//                                                                         //
//          P R I V A T E   D E F I N I T I O N S                          //
//                                                                         //
//=========================================================================//

//---------------------------------------------------------------------------
// const defines
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// local types
//---------------------------------------------------------------------------


typedef struct
{
    tEplPdoAllocationParam  m_Allocation;
    tEplPdoChannel*         m_pRxPdoChannel;
    tEplPdoMappObject(*     m_paRxObject)[EPL_D_PDO_RPDOChannelObjects_U8];     // pointer to array
    tEplPdoChannel*         m_pTxPdoChannel;
    tEplPdoMappObject(*     m_paTxObject)[EPL_D_PDO_TPDOChannelObjects_U8];     // pointer to array

} tEplPdokInstance;


//---------------------------------------------------------------------------
// local vars
//---------------------------------------------------------------------------

static tEplPdokInstance  EplPdokInstance_g;


//---------------------------------------------------------------------------
// local function prototypes
//---------------------------------------------------------------------------

static tEplKernel EplPdokPdoEncode(tEplFrame* pFrame_p, unsigned int uiFrameSize_p);

static tEplKernel EplPdokPdoDecode(tEplFrame* pFrame_p, unsigned int uiFrameSize_p);

static tEplKernel EplPdokCopyVarToPdo(BYTE* pbPayload_p, tEplPdoMappObject* pMappObject_p);

static tEplKernel EplPdokCopyVarFromPdo(BYTE* pbPayload_p, tEplPdoMappObject* pMappObject_p);



//=========================================================================//
//                                                                         //
//          P U B L I C   F U N C T I O N S                                //
//                                                                         //
//=========================================================================//

//---------------------------------------------------------------------------
//
// Function:    EplPdokAddInstance()
//
// Description: add and initialize new instance of EPL stack
//
// Parameters:  none
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokAddInstance(void)
{
    EPL_MEMSET(&EplPdokInstance_g, 0, sizeof(EplPdokInstance_g));

    return kEplSuccessful;
}

//---------------------------------------------------------------------------
//
// Function:    EplPdokDelInstance()
//
// Description: deletes an instance of EPL stack
//
// Parameters:  none
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokDelInstance(void)
{
    EplPdokInstance_g.m_Allocation.m_uiRxPdoChannelCount = 0;

    if (EplPdokInstance_g.m_pRxPdoChannel != NULL)
    {
        EPL_FREE(EplPdokInstance_g.m_pRxPdoChannel);
        EplPdokInstance_g.m_pRxPdoChannel = NULL;
    }

    if (EplPdokInstance_g.m_paRxObject != NULL)
    {
        EPL_FREE(EplPdokInstance_g.m_paRxObject);
        EplPdokInstance_g.m_paRxObject = NULL;
    }

    EplPdokInstance_g.m_Allocation.m_uiTxPdoChannelCount = 0;

    if (EplPdokInstance_g.m_pTxPdoChannel != NULL)
    {
        EPL_FREE(EplPdokInstance_g.m_pTxPdoChannel);
        EplPdokInstance_g.m_pTxPdoChannel = NULL;
    }

    if (EplPdokInstance_g.m_paTxObject != NULL)
    {
        EPL_FREE(EplPdokInstance_g.m_paTxObject);
        EplPdokInstance_g.m_paTxObject = NULL;
    }

    return kEplSuccessful;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokCbPdoReceived
//
// Description: This function is called by DLL if PRes or PReq frame was
//              received. It posts the frame to the event queue.
//              It is called in states NMT_CS_READY_TO_OPERATE and NMT_CS_OPERATIONAL.
//              The passed PDO needs not to be valid.
//
// Parameters:  pFrameInfo_p            = pointer to frame info structure
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokCbPdoReceived(tEplFrameInfo * pFrameInfo_p)
{
tEplKernel      Ret = kEplSuccessful;
tEplEvent       Event;

    Event.m_EventSink = kEplEventSinkPdok;
    Event.m_EventType = kEplEventTypePdoRx;
    // limit copied data to size of PDO (because from some CNs the frame is larger than necessary)
    Event.m_uiSize = AmiGetWordFromLe(&pFrameInfo_p->m_pFrame->m_Data.m_Pres.m_le_wSize) + 24; // pFrameInfo_p->m_uiFrameSize;
    Event.m_pArg = pFrameInfo_p->m_pFrame;
    Ret = EplEventkPost(&Event);

    return Ret;
}

//---------------------------------------------------------------------------
//
// Function:    EplPdokCbPdoTransmitted
//
// Description: This function is called by DLL if PRes or PReq frame was
//              sent. It posts the pointer to the frame to the event queue.
//              It is called in NMT_CS_PRE_OPERATIONAL_2,
//              NMT_CS_READY_TO_OPERATE and NMT_CS_OPERATIONAL.
//
// Parameters:  pFrameInfo_p            = pointer to frame info structure
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokCbPdoTransmitted(tEplFrameInfo * pFrameInfo_p)
{
tEplKernel      Ret = kEplSuccessful;

    Ret = EplPdokPdoEncode(pFrameInfo_p->m_pFrame, pFrameInfo_p->m_uiFrameSize);

    return Ret;
}

//---------------------------------------------------------------------------
//
// Function:    EplPdokCbSoa
//
// Description: This function is called by DLL if SoA frame was
//              received resp. sent. It posts this event to the event queue.
//
// Parameters:  pFrameInfo_p            = pointer to frame info structure
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokCbSoa(tEplFrameInfo * pFrameInfo_p)
{
tEplKernel      Ret = kEplSuccessful;
tEplEvent       Event;

    Event.m_EventSink = kEplEventSinkPdok;
    Event.m_EventType = kEplEventTypePdoSoa;
    Event.m_uiSize = 0;
    Event.m_pArg = NULL;
    Ret = EplEventkPost(&Event);

    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokAlloc()
//
// Description: This function allocates memory for PDOs according to the specified parameter.
//
// Parameters:  pAllocationParam_p      =
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokAlloc(tEplPdoAllocationParam* pAllocationParam_p)
{
tEplKernel      Ret = kEplSuccessful;
unsigned int    uiIndex;

    if (EplPdokInstance_g.m_Allocation.m_uiRxPdoChannelCount !=
        pAllocationParam_p->m_uiRxPdoChannelCount)
    {   // allocation should be changed

        EplPdokInstance_g.m_Allocation.m_uiRxPdoChannelCount =
                pAllocationParam_p->m_uiRxPdoChannelCount;

        if (EplPdokInstance_g.m_pRxPdoChannel != NULL)
        {
            EPL_FREE(EplPdokInstance_g.m_pRxPdoChannel);
            EplPdokInstance_g.m_pRxPdoChannel = NULL;
        }

        if (EplPdokInstance_g.m_paRxObject != NULL)
        {
            EPL_FREE(EplPdokInstance_g.m_paRxObject);
            EplPdokInstance_g.m_paRxObject = NULL;
        }

        if (pAllocationParam_p->m_uiRxPdoChannelCount > 0)
        {
            EplPdokInstance_g.m_pRxPdoChannel = EPL_MALLOC(sizeof (*EplPdokInstance_g.m_pRxPdoChannel) * pAllocationParam_p->m_uiRxPdoChannelCount);

            if (EplPdokInstance_g.m_pRxPdoChannel == NULL)
            {
                Ret = kEplPdoInitError;
                goto Exit;
            }

            EplPdokInstance_g.m_paRxObject = EPL_MALLOC(sizeof (*EplPdokInstance_g.m_paRxObject) * pAllocationParam_p->m_uiRxPdoChannelCount);

            if (EplPdokInstance_g.m_paRxObject == NULL)
            {
                Ret = kEplPdoInitError;
                goto Exit;
            }
        }
    }

    // disable all RPDOs
    for (uiIndex = 0; uiIndex < pAllocationParam_p->m_uiRxPdoChannelCount; uiIndex++)
    {
        EplPdokInstance_g.m_pRxPdoChannel[uiIndex].m_uiNodeId = EPL_PDO_INVALID_NODE_ID;
    }

    if (EplPdokInstance_g.m_Allocation.m_uiTxPdoChannelCount !=
        pAllocationParam_p->m_uiTxPdoChannelCount)
    {   // allocation should be changed

        EplPdokInstance_g.m_Allocation.m_uiTxPdoChannelCount =
                pAllocationParam_p->m_uiTxPdoChannelCount;

        if (EplPdokInstance_g.m_pTxPdoChannel != NULL)
        {
            EPL_FREE(EplPdokInstance_g.m_pTxPdoChannel);
            EplPdokInstance_g.m_pTxPdoChannel = NULL;
        }

        if (EplPdokInstance_g.m_paTxObject != NULL)
        {
            EPL_FREE(EplPdokInstance_g.m_paTxObject);
            EplPdokInstance_g.m_paTxObject = NULL;
        }

        if (pAllocationParam_p->m_uiTxPdoChannelCount > 0)
        {
            EplPdokInstance_g.m_pTxPdoChannel = EPL_MALLOC(sizeof (*EplPdokInstance_g.m_pTxPdoChannel) * pAllocationParam_p->m_uiTxPdoChannelCount);

            if (EplPdokInstance_g.m_pTxPdoChannel == NULL)
            {
                Ret = kEplPdoInitError;
                goto Exit;
            }

            EplPdokInstance_g.m_paTxObject = EPL_MALLOC(sizeof (*EplPdokInstance_g.m_paTxObject) * pAllocationParam_p->m_uiTxPdoChannelCount);

            if (EplPdokInstance_g.m_paTxObject == NULL)
            {
                Ret = kEplPdoInitError;
                goto Exit;
            }
        }
    }

    // disable all TPDOs
    for (uiIndex = 0; uiIndex < pAllocationParam_p->m_uiTxPdoChannelCount; uiIndex++)
    {
        EplPdokInstance_g.m_pTxPdoChannel[uiIndex].m_uiNodeId = EPL_PDO_INVALID_NODE_ID;
    }

Exit:
    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokConfigureChannel()
//
// Description: This function configures the specified PDO channel.
//
// Parameters:  pChannelConf_p          = PDO channel configuration
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokConfigureChannel(tEplPdoChannelConf* pChannelConf_p)
{
tEplKernel      Ret = kEplSuccessful;

    if (pChannelConf_p->m_fTx == FALSE)
    {   // RPDO
        if (pChannelConf_p->m_uiChannelId >= EplPdokInstance_g.m_Allocation.m_uiRxPdoChannelCount)
        {
            Ret = kEplPdoNotExist;
            goto Exit;
        }

        if (pChannelConf_p->m_PdoChannel.m_uiMappObjectCount > tabentries(*EplPdokInstance_g.m_paRxObject))
        {
            Ret = kEplPdoErrorMapp;
            goto Exit;
        }

        // copy channel configuration to local structure
        EPL_MEMCPY(&EplPdokInstance_g.m_pRxPdoChannel[pChannelConf_p->m_uiChannelId],
                   &pChannelConf_p->m_PdoChannel,
                   sizeof (pChannelConf_p->m_PdoChannel));

        EPL_MEMCPY(&EplPdokInstance_g.m_paRxObject[pChannelConf_p->m_uiChannelId],
                   &pChannelConf_p->m_aMappObject[0],
                    (pChannelConf_p->m_PdoChannel.m_uiMappObjectCount
                       * sizeof (pChannelConf_p->m_aMappObject[0])));

        // $$$ d.k. inform DLL about PRes filter for this PDO
        //          EplDllkAddNode
    }
    else
    {   // TPDO
        if (pChannelConf_p->m_uiChannelId >= EplPdokInstance_g.m_Allocation.m_uiTxPdoChannelCount)
        {
            Ret = kEplPdoNotExist;
            goto Exit;
        }

        if (pChannelConf_p->m_PdoChannel.m_uiMappObjectCount > tabentries(*EplPdokInstance_g.m_paTxObject))
        {
            Ret = kEplPdoErrorMapp;
            goto Exit;
        }

        // copy channel configuration to local structure
        EPL_MEMCPY(&EplPdokInstance_g.m_pTxPdoChannel[pChannelConf_p->m_uiChannelId],
                   &pChannelConf_p->m_PdoChannel,
                   sizeof (pChannelConf_p->m_PdoChannel));

        EPL_MEMCPY(&EplPdokInstance_g.m_paTxObject[pChannelConf_p->m_uiChannelId],
                   &pChannelConf_p->m_aMappObject[0],
                    (pChannelConf_p->m_PdoChannel.m_uiMappObjectCount
                       * sizeof (pChannelConf_p->m_aMappObject[0])));

    }

Exit:
    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokProcess
//
// Description: This function processes all received and transmitted PDOs.
//              This function must not be interrupted by any other task
//              except ISRs (like the ethernet driver ISR, which may call
//              EplPdokCbFrameReceived() or EplPdokCbFrameTransmitted()).
//
// Parameters:  pEvent_p                = pointer to event structure
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

tEplKernel EplPdokProcess(tEplEvent * pEvent_p)
{
tEplKernel  Ret = kEplSuccessful;
WORD        wPdoSize;
tEplFrame*  pFrame;

    switch (pEvent_p->m_EventType)
    {
        case kEplEventTypePdoRx:  // RPDO received
            pFrame = (tEplFrame *) pEvent_p->m_pArg;

            wPdoSize = AmiGetWordFromLe(&pFrame->m_Data.m_Pres.m_le_wSize);

            Ret = EplPdokPdoDecode(pFrame, wPdoSize + 24);

            break;

        case kEplEventTypePdoSoa: // SoA received

            // invalidate TPDOs
            Ret = EplPdokCalSetTpdosValid(FALSE);
            break;

//        case kEplEventTypePdoTx:  // TPDO transmitted
        default:
        {
            ASSERTMSG(FALSE, "EplPdokProcess(): unhandled event type!\n");
            Ret = kEplInvalidEvent;
            break;
        }
    }

    return Ret;
}

//=========================================================================//
//                                                                         //
//          P R I V A T E   F U N C T I O N S                              //
//                                                                         //
//=========================================================================//

//---------------------------------------------------------------------------
//
// Function:    EplPdokPdoEncode
//
// Description: This function encodes a PDO into the specified frame.
//
// Parameters:  pFrame_p                = pointer to frame
//              uiFrameSize_p           = size of frame
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

static tEplKernel EplPdokPdoEncode(tEplFrame* pFrame_p, unsigned int uiFrameSize_p)
{
tEplKernel          Ret = kEplSuccessful;
BYTE                bFrameData;
BOOL                fValid;
unsigned int        uiNodeId;
tEplMsgType         MsgType;
tEplPdoChannel*     pPdoChannel;
unsigned int        uiChannelId;
tEplPdoMappObject*  pMappObject;
unsigned int        uiMappObjectCount;

    // set TPDO invalid, so that only fully processed TPDOs are sent as valid
    bFrameData = AmiGetByteFromLe(&pFrame_p->m_Data.m_Pres.m_le_bFlag1);
    AmiSetByteToLe(&pFrame_p->m_Data.m_Pres.m_le_bFlag1, (bFrameData & ~EPL_FRAME_FLAG1_RD));

    // retrieve EPL message type
    MsgType = AmiGetByteFromLe(&pFrame_p->m_le_bMessageType);
    if (MsgType == kEplMsgTypePres)
    {   // TPDO is PRes frame
        uiNodeId = EPL_PDO_PRES_NODE_ID;  // 0x00
    }
    else
    {   // TPDO is PReq frame
        // retrieve node ID
        uiNodeId = AmiGetByteFromLe(&pFrame_p->m_le_bDstNodeId);
    }

    // search for appropriate valid TPDO
    for (uiChannelId = 0, pPdoChannel = &EplPdokInstance_g.m_pTxPdoChannel[0];
         uiChannelId < EplPdokInstance_g.m_Allocation.m_uiTxPdoChannelCount;
         uiChannelId++, pPdoChannel++)
    {
        if (pPdoChannel->m_uiNodeId != uiNodeId)
        {
            continue;
        }

        // valid TPDO found

        if ((unsigned int)(pPdoChannel->m_wPdoSize + 24) > uiFrameSize_p)
        {   // TPDO is too short
            // $$$ raise PDO error, set Ret
            goto Exit;
        }

        // set PDO version in frame
        AmiSetByteToLe(&pFrame_p->m_Data.m_Pres.m_le_bPdoVersion, pPdoChannel->m_bMappingVersion);

        // process mapping
        for (uiMappObjectCount = pPdoChannel->m_uiMappObjectCount, pMappObject = EplPdokInstance_g.m_paTxObject[uiChannelId];
             uiMappObjectCount > 0;
             uiMappObjectCount--, pMappObject++)
        {

            // copy object from process/OD variable to TPDO
            Ret = EplPdokCopyVarToPdo(&pFrame_p->m_Data.m_Pres.m_le_abPayload[0], pMappObject);
            if (Ret != kEplSuccessful)
            {   // other fatal error occured
                goto Exit;
            }

        }

        // set PDO size in frame
        AmiSetWordToLe(&pFrame_p->m_Data.m_Pres.m_le_wSize, pPdoChannel->m_wPdoSize);

        Ret = EplPdokCalAreTpdosValid(&fValid);
        if (fValid != FALSE)
        {
            // set TPDO valid
            bFrameData = AmiGetByteFromLe(&pFrame_p->m_Data.m_Pres.m_le_bFlag1);
            AmiSetByteToLe(&pFrame_p->m_Data.m_Pres.m_le_bFlag1, (bFrameData | EPL_FRAME_FLAG1_RD));
        }

        // processing finished successfully
        break;
    }

Exit:
    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokCopyVarToPdo
//
// Description: This function copies a variable specified by the mapping object
//              to the PDO payload.
//
// Parameters:  pbPayload_p             = pointer to PDO payload in destination frame
//              pMappObject_p           = pointer to mapping object
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

static tEplKernel EplPdokCopyVarToPdo(BYTE* pbPayload_p, tEplPdoMappObject* pMappObject_p)
{
tEplKernel      Ret = kEplSuccessful;
unsigned int    uiByteOffset;
void*           pVar;

    uiByteOffset = EPL_PDO_MAPPOBJECT_GET_BITOFFSET(pMappObject_p) >> 3;
    pbPayload_p += uiByteOffset;
    pVar = EPL_PDO_MAPPOBJECT_GET_VAR(pMappObject_p);

    switch(EPL_PDO_MAPPOBJECT_GET_TYPE(pMappObject_p))
    {
        //-----------------------------------------------
        // types without ami
        case kEplObdTypVString:
        case kEplObdTypOString:
        case kEplObdTypDomain:
        default:
        {
            // read value from object
            EPL_MEMCPY (pbPayload_p, pVar, EPL_PDO_MAPPOBJECT_GET_BYTESIZE(pMappObject_p));

            break;
        }

        //-----------------------------------------------
        // numerical type which needs ami-write
        // 8 bit or smaller values
        case kEplObdTypBool:
        case kEplObdTypInt8:
        case kEplObdTypUInt8:
        {
            AmiSetByteToLe(pbPayload_p, *((BYTE*)pVar));
            break;
        }

        // 16 bit values
        case kEplObdTypInt16:
        case kEplObdTypUInt16:
        {
            AmiSetWordToLe(pbPayload_p, *((WORD*)pVar));
            break;
        }

        // 24 bit values
        case kEplObdTypInt24:
        case kEplObdTypUInt24:
        {
            AmiSetDword24ToLe(pbPayload_p, *((DWORD*)pVar));
            break;
        }

        // 32 bit values
        case kEplObdTypInt32:
        case kEplObdTypUInt32:
        case kEplObdTypReal32:
        {
            AmiSetDwordToLe(pbPayload_p, *((DWORD*)pVar));
            break;
        }

        // 40 bit values
        case kEplObdTypInt40:
        case kEplObdTypUInt40:
        {
            AmiSetQword40ToLe(pbPayload_p, *((QWORD*)pVar));
            break;
        }

        // 48 bit values
        case kEplObdTypInt48:
        case kEplObdTypUInt48:
        {
            AmiSetQword48ToLe(pbPayload_p, *((QWORD*)pVar));
            break;
        }

        // 56 bit values
        case kEplObdTypInt56:
        case kEplObdTypUInt56:
        {
            AmiSetQword56ToLe(pbPayload_p, *((QWORD*)pVar));
            break;
        }

        // 64 bit values
        case kEplObdTypInt64:
        case kEplObdTypUInt64:
        case kEplObdTypReal64:
        {
            AmiSetQword64ToLe(pbPayload_p, *((QWORD*)pVar));
            break;
        }

        // time of day
        case kEplObdTypTimeOfDay:
        case kEplObdTypTimeDiff:
        {
            AmiSetTimeOfDay(pbPayload_p, ((tTimeOfDay*)pVar));
            break;
        }

    }

    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokPdoDecode
//
// Description: This function decodes a PDO from the specified frame.
//
// Parameters:  pFrame_p                = pointer to frame
//              uiFrameSize_p           = size of frame
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

static tEplKernel EplPdokPdoDecode(tEplFrame* pFrame_p, unsigned int uiFrameSize_p)
{
tEplKernel          Ret = kEplSuccessful;
BYTE                bFrameData;
unsigned int        uiNodeId;
tEplMsgType         MsgType;
tEplPdoChannel*     pPdoChannel;
unsigned int        uiChannelId;
tEplPdoMappObject*  pMappObject;
unsigned int        uiMappObjectCount;

    // check if received RPDO is valid
    bFrameData = AmiGetByteFromLe(&pFrame_p->m_Data.m_Pres.m_le_bFlag1);
    if ((bFrameData & EPL_FRAME_FLAG1_RD) == 0)
    {   // RPDO invalid
        goto Exit;
    }

    // retrieve EPL message type
    MsgType = AmiGetByteFromLe(&pFrame_p->m_le_bMessageType);
    if (MsgType == kEplMsgTypePreq)
    {   // RPDO is PReq frame
        uiNodeId = EPL_PDO_PREQ_NODE_ID;  // 0x00
    }
    else
    {   // RPDO is PRes frame
        // retrieve node ID
        uiNodeId = AmiGetByteFromLe(&pFrame_p->m_le_bSrcNodeId);
    }

    // search for appropriate valid RPDO
    for (uiChannelId = 0, pPdoChannel = &EplPdokInstance_g.m_pRxPdoChannel[0];
         uiChannelId < EplPdokInstance_g.m_Allocation.m_uiRxPdoChannelCount;
         uiChannelId++, pPdoChannel++)
    {
        if (pPdoChannel->m_uiNodeId != uiNodeId)
        {
            continue;
        }

        // retrieve PDO version from frame
        bFrameData = AmiGetByteFromLe(&pFrame_p->m_Data.m_Pres.m_le_bPdoVersion);
        if ((pPdoChannel->m_bMappingVersion & EPL_VERSION_MAIN) != (bFrameData & EPL_VERSION_MAIN))
        {   // PDO versions do not match
            // $$$ raise PDO error
            // termiate processing of this RPDO
            goto Exit;
        }

        // valid RPDO found

        if ((unsigned int)(pPdoChannel->m_wPdoSize + 24) > uiFrameSize_p)
        {   // RPDO is too short
            // $$$ raise PDO error, set Ret
            goto Exit;
        }

        // process mapping
        for (uiMappObjectCount = pPdoChannel->m_uiMappObjectCount, pMappObject = EplPdokInstance_g.m_paRxObject[uiChannelId];
             uiMappObjectCount > 0;
             uiMappObjectCount--, pMappObject++)
        {

            // copy object from process/OD variable to TPDO
            Ret = EplPdokCopyVarFromPdo(&pFrame_p->m_Data.m_Pres.m_le_abPayload[0], pMappObject);
            if (Ret != kEplSuccessful)
            {   // other fatal error occured
                goto Exit;
            }

        }

        // processing finished successfully
        break;
    }

Exit:
    return Ret;
}


//---------------------------------------------------------------------------
//
// Function:    EplPdokCopyVarFromPdo
//
// Description: This function copies a variable specified by the mapping object
//              from the PDO payload.
//
// Parameters:  pbPayload_p             = pointer to PDO payload in destination frame
//              pMappObject_p           = pointer to mapping object
//
// Returns:     tEplKernel              = error code
//
//
// State:
//
//---------------------------------------------------------------------------

static tEplKernel EplPdokCopyVarFromPdo(BYTE* pbPayload_p, tEplPdoMappObject* pMappObject_p)
{
tEplKernel      Ret = kEplSuccessful;
unsigned int    uiByteOffset;
void*           pVar;

    uiByteOffset = EPL_PDO_MAPPOBJECT_GET_BITOFFSET(pMappObject_p) >> 3;
    pbPayload_p += uiByteOffset;
    pVar = EPL_PDO_MAPPOBJECT_GET_VAR(pMappObject_p);

    switch(EPL_PDO_MAPPOBJECT_GET_TYPE(pMappObject_p))
    {
        //-----------------------------------------------
        // types without ami
        case kEplObdTypVString:
        case kEplObdTypOString:
        case kEplObdTypDomain:
        default:
        {
            // read value from object
            EPL_MEMCPY (pVar, pbPayload_p, EPL_PDO_MAPPOBJECT_GET_BYTESIZE(pMappObject_p));

            break;
        }

        //-----------------------------------------------
        // numerical type which needs ami-write
        // 8 bit or smaller values
        case kEplObdTypBool:
        case kEplObdTypInt8:
        case kEplObdTypUInt8:
        {
            *((BYTE*)pVar) = AmiGetByteFromLe(pbPayload_p);
            break;
        }

        // 16 bit values
        case kEplObdTypInt16:
        case kEplObdTypUInt16:
        {
            *((WORD*)pVar) = AmiGetWordFromLe(pbPayload_p);
            break;
        }

        // 24 bit values
        case kEplObdTypInt24:
        case kEplObdTypUInt24:
        {
            *((DWORD*)pVar) = AmiGetDword24FromLe(pbPayload_p);
            break;
        }

        // 32 bit values
        case kEplObdTypInt32:
        case kEplObdTypUInt32:
        case kEplObdTypReal32:
        {
            *((DWORD*)pVar) = AmiGetDwordFromLe(pbPayload_p);
            break;
        }

        // 40 bit values
        case kEplObdTypInt40:
        case kEplObdTypUInt40:
        {
            *((QWORD*)pVar) = AmiGetQword40FromLe(pbPayload_p);
            break;
        }

        // 48 bit values
        case kEplObdTypInt48:
        case kEplObdTypUInt48:
        {
            *((QWORD*)pVar) = AmiGetQword48FromLe(pbPayload_p);
            break;
        }

        // 56 bit values
        case kEplObdTypInt56:
        case kEplObdTypUInt56:
        {
            *((QWORD*)pVar) = AmiGetQword56FromLe(pbPayload_p);
            break;
        }

        // 64 bit values
        case kEplObdTypInt64:
        case kEplObdTypUInt64:
        case kEplObdTypReal64:
        {
            *((QWORD*)pVar) = AmiGetQword64FromLe(pbPayload_p);
            break;
        }

        // time of day
        case kEplObdTypTimeOfDay:
        case kEplObdTypTimeDiff:
        {
            AmiGetTimeOfDay(pVar, ((tTimeOfDay*)pbPayload_p));
            break;
        }

    }

    return Ret;
}


#endif // #if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_PDOK)) != 0)

// EOF

