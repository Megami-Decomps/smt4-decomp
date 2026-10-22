#ifndef GAMEDATA_EQUIPMENTTABLE_H
#define GAMEDATA_EQUIPMENTTABLE_H
#include "gamedata/DataTable.h"
struct EquipmentTableRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 id;
    /* 0x0A */ u8 unk0A[0x5E];
};
typedef char EquipmentTableRecordSizeCheck[sizeof(EquipmentTableRecord) == 0x68 &&
    offsetof(EquipmentTableRecord, id) == 8 ? 1 : -1];
#endif
