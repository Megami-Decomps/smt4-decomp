/* NON_MATCHING: retail tests the unit with subs r0 (feeding gameGetUnitRecord) and shares one MP clamp store between the branches; this duplicates the clamp */
#include "common.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

typedef struct SkillItem {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 skill;
} SkillItem;

s32 skillApplyRestoreToMember(s32 unit, u32 a, SkillItem *item, s32 noCost, s32 e);
s32 skillGetDiscountedCost(u32 skill, s32 player);
s32 appGetRemainingCapacity(u32 skill);

/* Uses a skill item for a unit (negative: the player) and, unless it failed or is free, pays its MP cost. */
s32 FUN_0026c654(s32 unit, u32 a, u32 id, s32 noCost)
{
    SkillItem *item = reinterpret_cast<SkillItem *>(skillDataFindById(id));
    s32 result;
    s16 mp;

    if (item == NULL) {
        return 1;
    }
    result = skillApplyRestoreToMember(unit, a, item, noCost, 0);
    if (result == 0 && noCost == 0) {
        if (unit < 0) {
            PlayerDataIV *player = gameGetPlayerData();
            mp = player->mp - skillGetDiscountedCost(item->skill, 1);
            player->mp = mp;
            if (mp < 0) {
                player->mp = 0;
            }
        } else {
            StatBlock *record = gameGetUnitRecord(unit);
            mp = record->mp - appGetRemainingCapacity(item->skill);
            record->mp = mp;
            if (mp < 0) {
                record->mp = 0;
            }
        }
    }
    return result;
}

} /* extern "C" */
