#include "common.h"

extern "C" {

typedef struct UnitData {
    /* 0x000 */ u8 unk000[0x118];
    /* 0x118 */ u16 skillIds[8];
} UnitData;

typedef struct BattleUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ UnitData *data;
} BattleUnit;

void *dataTable04FindById(u32 id);
s32 scrSetResult(s32 value);
BattleUnit *btlUnitGet(u32 id);

/* Script command: counts the unit's skill slots that hold an id found in data table 4. */
u32 FUN_0039d808(u32 *args)
{
    UnitData *data = btlUnitGet(args[0])->data;
    s32 count = 0;
    s32 i;

    for (i = 0; i < 8; i++) {
        u32 id = data->skillIds[i];

        if (id != 0 && dataTable04FindById(id) != NULL) {
            count++;
        }
    }
    scrSetResult(count);
    return 1;
}

} /* extern "C" */
