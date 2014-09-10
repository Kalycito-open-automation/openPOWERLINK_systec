//-----------------------------------------------------------------
//  OD for programmable device according to CiA 302-4
//-----------------------------------------------------------------
#define EPL_OBD_DEFINE_MACRO
    #include "EplObdMacro.h"
#undef EPL_OBD_DEFINE_MACRO

EPL_OBD_BEGIN ()

    EPL_OBD_BEGIN_PART_GENERIC ()

        #include "../Generic/objdict_1000-13ff.h"


        // Object 1400h: PDO_RxCommParam_00h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1400, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1400, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1400, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1400, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1400)

        // Object 1401h: PDO_RxCommParam_01h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1401, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1401, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1401, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1401, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1401)

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_NMT_MN)) != 0)
        // additional RxPDOs if master is enabled

        // Object 1402h: PDO_RxCommParam_02h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1402, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1402, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1402, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1402, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1402)

        // Object 1403h: PDO_RxCommParam_03h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1403, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1403, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1403, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1403, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1403)

        // Object 1404h: PDO_RxCommParam_04h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1404, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1404, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1404, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1404, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1404)

        // Object 1405h: PDO_RxCommParam_05h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1405, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1405, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1405, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1405, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1405)

        // Object 1406h: PDO_RxCommParam_06h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1406, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1406, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1406, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1406, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1406)

        // Object 1407h: PDO_RxCommParam_07h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1407, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1407, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1407, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1407, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1407)

        // Object 1408h: PDO_RxCommParam_08h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1408, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1408, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1408, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1408, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1408)

        // Object 1409h: PDO_RxCommParam_09h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1409, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1409, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1409, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1409, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1409)

        // Object 140Ah: PDO_RxCommParam_0Ah_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140A, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140A, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140A, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140A, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140A)

        // Object 140Bh: PDO_RxCommParam_0Bh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140B, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140B, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140B, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140B, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140B)

        // Object 140Ch: PDO_RxCommParam_0Ch_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140C, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140C, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140C, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140C, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140C)

        // Object 140Dh: PDO_RxCommParam_0Dh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140D, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140D, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140D, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140D, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140D)

        // Object 140Eh: PDO_RxCommParam_0Eh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140E, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140E, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140E, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140E, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140E)

        // Object 140Fh: PDO_RxCommParam_0Fh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x140F, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140F, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x140F, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x140F, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x140F)

        // Object 1410h: PDO_RxCommParam_10h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1410, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1410, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1410, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1410, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1410)

        // Object 1411h: PDO_RxCommParam_11h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1411, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1411, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1411, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1411, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1411)

        // Object 1412h: PDO_RxCommParam_12h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1412, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1412, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1412, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1412, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1412)

        // Object 1413h: PDO_RxCommParam_13h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1413, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1413, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1413, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1413, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1413)

        // Object 1414h: PDO_RxCommParam_14h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1414, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1414, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1414, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1414, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1414)

        // Object 1415h: PDO_RxCommParam_15h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1415, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1415, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1415, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1415, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1415)

        // Object 1416h: PDO_RxCommParam_16h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1416, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1416, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1416, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1416, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1416)

        // Object 1417h: PDO_RxCommParam_17h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1417, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1417, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1417, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1417, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1417)

        // Object 1418h: PDO_RxCommParam_18h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1418, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1418, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1418, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1418, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1418)

        // Object 1419h: PDO_RxCommParam_19h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1419, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1419, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1419, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1419, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1419)

        // Object 141Ah: PDO_RxCommParam_1Ah_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141A, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141A, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141A, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141A, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141A)

        // Object 141Bh: PDO_RxCommParam_1Bh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141B, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141B, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141B, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141B, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141B)

        // Object 141Ch: PDO_RxCommParam_1Ch_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141C, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141C, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141C, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141C, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141C)

        // Object 141Dh: PDO_RxCommParam_1Dh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141D, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141D, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141D, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141D, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141D)

        // Object 141Eh: PDO_RxCommParam_1Eh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141E, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141E, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141E, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141E, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141E)

        // Object 141Fh: PDO_RxCommParam_1Fh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x141F, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141F, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x141F, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x141F, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x141F)

        // Object 1420h: PDO_RxCommParam_20h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1420, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1420, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1420, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1420, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1420)

        // Object 1421h: PDO_RxCommParam_21h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1421, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1421, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1421, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1421, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1421)

        // Object 1422h: PDO_RxCommParam_22h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1422, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1422, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1422, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1422, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1422)

        // Object 1423h: PDO_RxCommParam_23h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1423, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1423, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1423, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1423, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1423)

        // Object 1424h: PDO_RxCommParam_24h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1424, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1424, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1424, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1424, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1424)

        // Object 1425h: PDO_RxCommParam_25h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1425, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1425, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1425, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1425, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1425)

        // Object 1426h: PDO_RxCommParam_26h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1426, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1426, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1426, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1426, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1426)

        // Object 1427h: PDO_RxCommParam_27h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1427, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1427, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1427, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1427, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1427)

#endif

        // Object 1600h: PDO_RxMappParam_00h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1600, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1601h: PDO_RxMappParam_01h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1601, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_NMT_MN)) != 0)
        // additional RxPDOs if master is enabled

        // Object 1602h: PDO_RxMappParam_02h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1602, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1603h: PDO_RxMappParam_03h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1603, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1604h: PDO_RxMappParam_04h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1604, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1605h: PDO_RxMappParam_05h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1605, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1606h: PDO_RxMappParam_06h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1606, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1607h: PDO_RxMappParam_07h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1607, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1608h: PDO_RxMappParam_08h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1608, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1609h: PDO_RxMappParam_09h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1609, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Ah: PDO_RxMappParam_0Ah_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160A, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Bh: PDO_RxMappParam_0Bh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160B, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Ch: PDO_RxMappParam_0Ch_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160C, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Dh: PDO_RxMappParam_0Dh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160D, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Eh: PDO_RxMappParam_0Eh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160E, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 160Fh: PDO_RxMappParam_0Fh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x160F, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1610h: PDO_RxMappParam_10h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1610, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1611h: PDO_RxMappParam_11h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1611, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1612h: PDO_RxMappParam_12h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1612, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1613h: PDO_RxMappParam_13h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1613, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1614h: PDO_RxMappParam_14h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1614, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1615h: PDO_RxMappParam_15h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1615, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1616h: PDO_RxMappParam_16h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1616, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1617h: PDO_RxMappParam_17h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1617, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1618h: PDO_RxMappParam_18h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1618, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1619h: PDO_RxMappParam_19h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1619, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Ah: PDO_RxMappParam_1Ah_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161A, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Bh: PDO_RxMappParam_1Bh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161B, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Ch: PDO_RxMappParam_1Ch_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161C, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Dh: PDO_RxMappParam_1Dh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161D, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Eh: PDO_RxMappParam_1Eh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161E, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 161Fh: PDO_RxMappParam_1Fh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x161F, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1620h: PDO_RxMappParam_20h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1620, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1621h: PDO_RxMappParam_21h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1621, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1622h: PDO_RxMappParam_22h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1622, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1623h: PDO_RxMappParam_23h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1623, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1624h: PDO_RxMappParam_24h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1624, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1625h: PDO_RxMappParam_25h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1625, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1626h: PDO_RxMappParam_26h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1626, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1627h: PDO_RxMappParam_27h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1627, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

#endif

        // Object 1800h: PDO_TxCommParam_00h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1800, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1800, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1800, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1800, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1800)

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_NMT_MN)) != 0)
        // additional TxPDOs if master is enabled

        // Object 1801h: PDO_TxCommParam_01h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1801, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1801, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1801, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1801, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1801)

        // Object 1802h: PDO_TxCommParam_02h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1802, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1802, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1802, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1802, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1802)

        // Object 1803h: PDO_TxCommParam_03h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1803, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1803, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1803, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1803, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1803)

        // Object 1804h: PDO_TxCommParam_04h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1804, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1804, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1804, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1804, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1804)

        // Object 1805h: PDO_TxCommParam_05h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1805, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1805, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1805, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1805, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1805)

        // Object 1806h: PDO_TxCommParam_06h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1806, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1806, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1806, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1806, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1806)

        // Object 1807h: PDO_TxCommParam_07h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1807, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1807, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1807, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1807, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1807)

        // Object 1808h: PDO_TxCommParam_08h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1808, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1808, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1808, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1808, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1808)

        // Object 1809h: PDO_TxCommParam_09h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1809, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1809, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1809, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1809, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1809)

        // Object 180Ah: PDO_TxCommParam_0Ah_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180A, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180A, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180A, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180A, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180A)

        // Object 180Bh: PDO_TxCommParam_0Bh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180B, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180B, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180B, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180B, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180B)

        // Object 180Ch: PDO_TxCommParam_0Ch_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180C, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180C, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180C, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180C, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180C)

        // Object 180Dh: PDO_TxCommParam_0Dh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180D, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180D, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180D, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180D, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180D)

        // Object 180Eh: PDO_TxCommParam_0Eh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180E, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180E, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180E, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180E, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180E)

        // Object 180Fh: PDO_TxCommParam_0Fh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x180F, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180F, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x180F, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x180F, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x180F)

        // Object 1810h: PDO_TxCommParam_10h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1810, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1810, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1810, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1810, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1810)

        // Object 1811h: PDO_TxCommParam_11h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1811, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1811, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1811, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1811, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1811)

        // Object 1812h: PDO_TxCommParam_12h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1812, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1812, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1812, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1812, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1812)

        // Object 1813h: PDO_TxCommParam_13h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1813, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1813, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1813, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1813, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1813)

        // Object 1814h: PDO_TxCommParam_14h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1814, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1814, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1814, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1814, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1814)

        // Object 1815h: PDO_TxCommParam_15h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1815, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1815, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1815, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1815, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1815)

        // Object 1816h: PDO_TxCommParam_16h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1816, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1816, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1816, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1816, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1816)

        // Object 1817h: PDO_TxCommParam_17h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1817, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1817, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1817, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1817, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1817)

		// Object 1818h: PDO_TxCommParam_18h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1818, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1818, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1818, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1818, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1818)

        // Object 1819h: PDO_TxCommParam_19h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1819, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1819, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1819, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1819, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1819)

        // Object 181Ah: PDO_TxCommParam_1Ah_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181A, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181A, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181A, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181A, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181A)

        // Object 181Bh: PDO_TxCommParam_1Bh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181B, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181B, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181B, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181B, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181B)

        // Object 181Ch: PDO_TxCommParam_1Ch_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181C, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181C, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181C, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181C, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181C)

        // Object 181Dh: PDO_TxCommParam_1Dh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181D, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181D, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181D, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181D, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181D)

        // Object 181Eh: PDO_TxCommParam_1Eh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181E, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181E, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181E, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181E, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181E)

        // Object 181Fh: PDO_TxCommParam_1Fh_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x181F, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181F, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x181F, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x181F, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x181F)

        // Object 1820h: PDO_TxCommParam_20h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1820, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1820, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1820, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1820, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1820)

        // Object 1821h: PDO_TxCommParam_21h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1821, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1821, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1821, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1821, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1821)

        // Object 1822h: PDO_TxCommParam_22h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1822, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1822, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1822, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1822, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1822)

        // Object 1823h: PDO_TxCommParam_23h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1823, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1823, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1823, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1823, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1823)

        // Object 1824h: PDO_TxCommParam_24h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1824, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1824, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1824, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1824, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1824)

        // Object 1825h: PDO_TxCommParam_25h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1825, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1825, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1825, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1825, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1825)

        // Object 1826h: PDO_TxCommParam_26h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1826, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1826, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1826, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1826, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1826)

        // Object 1827h: PDO_TxCommParam_27h_REC
        EPL_OBD_BEGIN_INDEX_RAM(0x1827, 0x03, EplPdouCbObdAccess)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1827, 0x00, kEplObdTypUInt8, kEplObdAccConst, tEplObdUnsigned8, NumberOfEntries, 0x02)
            EPL_OBD_SUBINDEX_RAM_VAR_RG(0x1827, 0x01, kEplObdTypUInt8, kEplObdAccGRW, tEplObdUnsigned8, NodeID_U8, 0x00, 0, 254)
            EPL_OBD_SUBINDEX_RAM_VAR(0x1827, 0x02, kEplObdTypUInt8, kEplObdAccRW, tEplObdUnsigned8, MappingVersion_U8, 0x00)
        EPL_OBD_END_INDEX(0x1827)

#endif

        // Object 1A00h: PDO_TxMappParam_00h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A00, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

#if (((EPL_MODULE_INTEGRATION) & (EPL_MODULE_NMT_MN)) != 0)
        // additional TxPDOs if master is enabled

        // Object 1A01h: PDO_TxMappParam_01h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A01, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A02h: PDO_TxMappParam_02h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A02, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A03h: PDO_TxMappParam_03h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A03, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A04h: PDO_TxMappParam_04h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A04, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A05h: PDO_TxMappParam_05h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A05, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A06h: PDO_TxMappParam_06h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A06, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A07h: PDO_TxMappParam_07h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A07, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A08h: PDO_TxMappParam_08h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A08, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A09h: PDO_TxMappParam_09h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A09, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Ah: PDO_TxMappParam_0Ah_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0A, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Bh: PDO_TxMappParam_0Bh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0B, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Ch: PDO_TxMappParam_0Ch_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0C, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Dh: PDO_TxMappParam_0Dh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0D, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Eh: PDO_TxMappParam_0Eh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0E, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A0Fh: PDO_TxMappParam_0Fh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A0F, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A10h: PDO_TxMappParam_10h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A10, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A11h: PDO_TxMappParam_11h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A11, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A12h: PDO_TxMappParam_12h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A12, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A13h: PDO_TxMappParam_13h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A13, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A14h: PDO_TxMappParam_14h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A14, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A15h: PDO_TxMappParam_15h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A15, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A16h: PDO_TxMappParam_16h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A16, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A17h: PDO_TxMappParam_17h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A17, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A18h: PDO_TxMappParam_18h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A18, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A19h: PDO_TxMappParam_19h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A19, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Ah: PDO_TxMappParam_1Ah_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1A, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Bh: PDO_TxMappParam_1Bh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1B, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Ch: PDO_TxMappParam_1Ch_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1C, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Dh: PDO_TxMappParam_1Dh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1D, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Eh: PDO_TxMappParam_1Eh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1E, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A1Fh: PDO_TxMappParam_1Fh_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A1F, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A20h: PDO_TxMappParam_20h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A20, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A20h: PDO_TxMappParam_20h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A21, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A22h: PDO_TxMappParam_22h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A22, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A23h: PDO_TxMappParam_23h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A23, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A24h: PDO_TxMappParam_24h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A24, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A25h: PDO_TxMappParam_25h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A25, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A26h: PDO_TxMappParam_26h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A26, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

        // Object 1A27h: PDO_TxMappParam_27h_AU64
        EPL_OBD_RAM_INDEX_RAM_PDO_MAPPING(0x1A27, 0xFE, EplPdouCbObdAccess, kEplObdAccRW, ObjectMapping, 0x0000000000000000LL)

#endif


        #include "../Generic/objdict_1b00-1fff.h"

    EPL_OBD_END_PART ()

    EPL_OBD_BEGIN_PART_MANUFACTURER ()

    EPL_OBD_END_PART ()

    EPL_OBD_BEGIN_PART_DEVICE ()

        // static input process image (from network point of view)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA000, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA001, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA002, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA003, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA004, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA005, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA006, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA007, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA008, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA009, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00A, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00B, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00C, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00D, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00E, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA00F, (252), NULL, kEplObdTypInt8, kEplObdAccVPR, tEplObdInteger8, PI_Input_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA040, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA041, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA042, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA043, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA044, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA045, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA046, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA047, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA048, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA049, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04A, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04B, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04C, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04D, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04E, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA04F, (252), NULL, kEplObdTypUInt8, kEplObdAccVPR, tEplObdUnsigned8, PI_Input_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C0, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C1, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C2, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C3, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C4, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C5, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C6, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA0C7, (252), NULL, kEplObdTypInt16, kEplObdAccVPR, tEplObdInteger16, PI_Input_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA100, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA101, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA102, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA103, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA104, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA105, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA106, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA107, (252), NULL, kEplObdTypUInt16, kEplObdAccVPR, tEplObdUnsigned16, PI_Input_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA1C0, (252), NULL, kEplObdTypInt32, kEplObdAccVPR, tEplObdInteger32, PI_Input_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA1C1, (252), NULL, kEplObdTypInt32, kEplObdAccVPR, tEplObdInteger32, PI_Input_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA1C2, (252), NULL, kEplObdTypInt32, kEplObdAccVPR, tEplObdInteger32, PI_Input_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA1C3, (252), NULL, kEplObdTypInt32, kEplObdAccVPR, tEplObdInteger32, PI_Input_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA200, (252), NULL, kEplObdTypUInt32, kEplObdAccVPR, tEplObdUnsigned32, PI_Input_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA201, (252), NULL, kEplObdTypUInt32, kEplObdAccVPR, tEplObdUnsigned32, PI_Input_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA202, (252), NULL, kEplObdTypUInt32, kEplObdAccVPR, tEplObdUnsigned32, PI_Input_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA203, (252), NULL, kEplObdTypUInt32, kEplObdAccVPR, tEplObdUnsigned32, PI_Input_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA400, (252), NULL, kEplObdTypInt64, kEplObdAccVPR, tEplObdInteger64, PI_Input_I64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA401, (252), NULL, kEplObdTypInt64, kEplObdAccVPR, tEplObdInteger64, PI_Input_I64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA440, (252), NULL, kEplObdTypUInt64, kEplObdAccVPR, tEplObdUnsigned64, PI_Input_U64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA441, (252), NULL, kEplObdTypUInt64, kEplObdAccVPR, tEplObdUnsigned64, PI_Input_U64, 0)


        // static output process image (from network point of view)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA480, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA481, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA482, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA483, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA484, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA485, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA486, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA487, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA488, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA489, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48A, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48B, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48C, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48D, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48E, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA48F, (252), NULL, kEplObdTypInt8, kEplObdAccVPRW, tEplObdInteger8, PI_Output_I8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C0, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C1, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C2, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C3, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C4, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C5, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C6, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C7, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C8, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4C9, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CA, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CB, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CC, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CD, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CE, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA4CF, (252), NULL, kEplObdTypUInt8, kEplObdAccVPRW, tEplObdUnsigned8, PI_Output_U8, 0x00)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA540, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA541, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA542, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA543, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA544, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA545, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA546, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA547, (252), NULL, kEplObdTypInt16, kEplObdAccVPRW, tEplObdInteger16, PI_Output_I16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA580, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA581, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA582, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA583, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA584, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA585, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA586, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA587, (252), NULL, kEplObdTypUInt16, kEplObdAccVPRW, tEplObdUnsigned16, PI_Output_U16, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA640, (252), NULL, kEplObdTypInt32, kEplObdAccVPRW, tEplObdInteger32, PI_Output_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA641, (252), NULL, kEplObdTypInt32, kEplObdAccVPRW, tEplObdInteger32, PI_Output_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA642, (252), NULL, kEplObdTypInt32, kEplObdAccVPRW, tEplObdInteger32, PI_Output_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA643, (252), NULL, kEplObdTypInt32, kEplObdAccVPRW, tEplObdInteger32, PI_Output_I32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA680, (252), NULL, kEplObdTypUInt32, kEplObdAccVPRW, tEplObdUnsigned32, PI_Output_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA681, (252), NULL, kEplObdTypUInt32, kEplObdAccVPRW, tEplObdUnsigned32, PI_Output_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA682, (252), NULL, kEplObdTypUInt32, kEplObdAccVPRW, tEplObdUnsigned32, PI_Output_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA683, (252), NULL, kEplObdTypUInt32, kEplObdAccVPRW, tEplObdUnsigned32, PI_Output_U32, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA880, (252), NULL, kEplObdTypInt64, kEplObdAccVPRW, tEplObdInteger64, PI_Output_I64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA881, (252), NULL, kEplObdTypInt64, kEplObdAccVPRW, tEplObdInteger64, PI_Output_I64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA8C0, (252), NULL, kEplObdTypUInt64, kEplObdAccVPRW, tEplObdUnsigned64, PI_Output_U64, 0)

        EPL_OBD_RAM_INDEX_RAM_VARARRAY (0xA8C1, (252), NULL, kEplObdTypUInt64, kEplObdAccVPRW, tEplObdUnsigned64, PI_Output_U64, 0)

    EPL_OBD_END_PART ()

EPL_OBD_END ()

#define EPL_OBD_UNDEFINE_MACRO
    #include "EplObdMacro.h"
#undef EPL_OBD_UNDEFINE_MACRO
