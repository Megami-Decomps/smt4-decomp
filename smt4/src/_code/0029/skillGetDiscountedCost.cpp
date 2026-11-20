/* NON_MATCHING: learned-rank search remains scalar instead of pair-unrolled, and branch-local discount accumulation differs. */
#include "gamedata/SkillDataRecord.h"
#include "shard/Shard004B.h"
#include "status/StatusCamera.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/GamePlayerData.h"

namespace {
struct SkillCostDiscountView {
    u8 unk00[0x38];
    s32 discount;
};
typedef char SkillCostDiscountOffsetCheck[
    offsetof(SkillCostDiscountView, discount) == 0x38 ? 1 : -1];
}

static __inline u8 findLearnedSkillRank(const PlayerDataIV *player, u32 skillId)
{
    for (s32 index = 0; index < 8; ++index) {
        if (player->skills[index] == skillId) {
            return (u8)player->skillRanks[index];
        }
    }
    return 0;
}

extern "C" {
s32 flagBitIsSet(u32 flag);
SkillCostDiscountView *appCostRecordFindById(u16 id);

// Apply learned-rank or global cost discounts, keeping a nonzero skill's cost at least one.
s32 skillGetDiscountedCost(u32 skillId, s32 useLearnedRank)
{
    SkillDataRecord *skill = skillDataFindById(skillId);
    if (skill == NULL) {
        return 0;
    }
    s32 baseCost = skill->cost.baseCost;
    s32 discount = 0;
    if (useLearnedRank != 0) {
        discount += skillSumRankBonuses(skill, findLearnedSkillRank(gameGetPlayerData(), skillId), 4);
    } else {
        if (flagBitIsSet(12) != 0) {
            discount = appCostRecordFindById(12)->discount;
        }
        if (flagBitIsSet(13) != 0) {
            discount += appCostRecordFindById(13)->discount;
        }
        if (flagBitIsSet(14) != 0) {
            discount += appCostRecordFindById(14)->discount;
        }
        if (flagBitIsSet(15) != 0) {
            discount += appCostRecordFindById(15)->discount;
        }
    }
    s32 cost = baseCost - discount;
    return cost > 0 ? cost : 1;
}
}
