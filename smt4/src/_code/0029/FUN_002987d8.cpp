#include "common.h"

extern "C" {

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s16 limit;
} UnitRecord;

extern UnitRecord *gameGetPlayerData(void);
extern UnitRecord *gameGetUnitRecord(s32 id);
extern void dataTable40FindById(s32 arg);
extern s32 FUN_0029a9d4(s32 arg, s32 mode);
extern s32 FUN_0029a924(s32 arg);

/* Compares `arg`'s value with the limit of unit `unit` (the player's data when `unit` is negative):
 * the value must not exceed the player's limit, or must be within a unit's. */
s32 FUN_002987d8(s32 unit, s32 arg)
{
    s32 result = 0;
    UnitRecord *record;

    dataTable40FindById(arg);
    if (unit < 0) {
        record = gameGetPlayerData();
        if (FUN_0029a9d4(arg, 1) <= record->limit) {
            result = 1;
        }
    } else {
        record = gameGetUnitRecord(unit);
        if (record->limit >= FUN_0029a924(arg)) {
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
