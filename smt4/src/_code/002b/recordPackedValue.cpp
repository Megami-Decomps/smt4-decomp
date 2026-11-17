#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

typedef struct Info002b8dc0 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 type;
} Info002b8dc0;

Info002b8dc0 *itemCategoryFindByItemId(void);

/* Level-like value of record `id` for the current info: 1 for type 0, 0 for types above 1, otherwise read from the record's packed field (999 when it holds none). */
u32 recordPackedValue(u32 id)
{
    Info002b8dc0 *info = itemCategoryFindByItemId();
    ConsumableRecord *record1;
    EquipmentRecord *record2;

    if (info == NULL) {
        return 0;
    }
    if (info->type == 0) {
        return 1;
    }
    if (info->type != 1) {
        return 0;
    }
    switch (info->kind) {
    default:
        return 999;
    case 1:
        record1 = dataTable08Sub1GetRecord(id);
        if (record1 == NULL) {
            return 0;
        }
        if ((record1->sortFlags & 0xffffff00) == 0) {
            return 999;
        }
        return record1->sortFlags >> 8;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        record2 = dataTable08Sub2GetRecord(id);
        if (record2 == NULL) {
            return 0;
        }
        if ((record2->flags & 0x7c) == 0) {
            return 999;
        }
        return (record2->flags & 0x7f) >> 2;
    }
}

} /* extern "C" */
