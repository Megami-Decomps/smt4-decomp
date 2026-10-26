/* NON_MATCHING: retail tests the unit with subs r0 (feeding gameGetUnitRecord) and shares one MP clamp store between the branches; this duplicates the clamp */
#include "common.h"
#include "gamedata/DataTable40.h"

extern "C" {

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2C */ s16 mp;
} UnitRecord;

typedef struct SkillItem {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 skill;
} SkillItem;

s32 FUN_00258de0(s32 unit, u32 a, SkillItem *item, s32 noCost, s32 e);
UnitRecord *gameGetPlayerData(void);
UnitRecord *gameGetUnitRecord(s32 unit);
s32 FUN_0029a9d4(u32 skill, s32 player);
s32 FUN_0029a924(u32 skill);

/* Uses a skill item for a unit (negative: the player) and, unless it failed or is free, pays its MP cost. */
s32 FUN_0026c654(s32 unit, u32 a, u32 id, s32 noCost)
{
    SkillItem *item = reinterpret_cast<SkillItem *>(dataTable40FindById(id));
    UnitRecord *record;
    s32 result;
    s16 mp;

    if (item == NULL) {
        return 1;
    }
    result = FUN_00258de0(unit, a, item, noCost, 0);
    if (result == 0 && noCost == 0) {
        if (unit < 0) {
            record = gameGetPlayerData();
            mp = record->mp - FUN_0029a9d4(item->skill, 1);
            record->mp = mp;
            if (mp < 0) {
                record->mp = 0;
            }
        } else {
            record = gameGetUnitRecord(unit);
            mp = record->mp - FUN_0029a924(item->skill);
            record->mp = mp;
            if (mp < 0) {
                record->mp = 0;
            }
        }
    }
    return result;
}

} /* extern "C" */
