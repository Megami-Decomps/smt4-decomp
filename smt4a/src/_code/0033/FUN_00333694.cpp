/* NON_MATCHING: retail shares one clamp store (placed after the player branch) between both
 * branches and passes the slot through "subs r0"; this build keeps a clamp per branch. */
#include "shard/Shard0034.h"
#include "shard/Shard004B.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"

/* A skill record of data table 4. */
struct SkillCostRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 cost;
};

extern "C" {
s32 FUN_0028809c(s32 slot, u32 target, SkillCostRecord *skill, s32 preview, s32 mode);
s32 skillGetCostWithRankReduction(u32 cost, s32 mode);

/* Uses skill `id` from party slot `slot` (the player when negative) on `target`; when it takes
 * effect outside preview, pays its cost from the user's MP. Returns 1 for an unknown skill. */
s32 FUN_00333694(s32 slot, u32 target, u32 id, s32 preview)
{
    SkillCostRecord *skill = (SkillCostRecord *)skillDataFindById(id);
    if (skill == NULL) {
        return 1;
    }
    s32 result = FUN_0028809c(slot, target, skill, preview, 0);
    if (result == 0 && preview == 0) {
        if (slot < 0) {
            PlayerDataA *player = gameGetPlayerData();
            player->mp -= skillGetCostWithRankReduction(skill->cost, 1);
            if (player->mp < 0) {
                player->mp = 0;
            }
        } else {
            SlotRecordA *unit = gameGetSlotRecord(slot);
            unit->mp -= skillGetAdjustedCost(unit, skill->cost);
            if (unit->mp < 0) {
                unit->mp = 0;
            }
        }
    }
    return result;
}
}
