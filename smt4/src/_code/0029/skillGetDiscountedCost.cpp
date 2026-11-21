/* NON_MATCHING: only the rank arm's add differs: retail shares the last flag arm's `add` (discount += bonus) where armcc
   folds the zero discount into a mov. */
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

/* The player's rank in a learned skill, 0 when not learned: the body of a real function (Apocalypse's padGetMappedValue),
   written as a plain static, which armcc inlines with retail's pair-unrolled search. */
static s32 findLearnedSkillRank(u32 skillId)
{
    const PlayerDataIV *player = gameGetPlayerData();
    for (s32 index = 0; index < 8; ++index) {
        if (player->skills[index] == skillId) {
            return player->skillRanks[index];
        }
    }
    return 0;
}

extern "C" {
s32 flagBitIsSet(u32 flag);
SkillCostDiscountView *appCostRecordFindById(u16 id);

/* Applies learned-rank or global cost discounts, keeping a nonzero skill's cost at least one. */
s32 skillGetDiscountedCost(u32 skillId, s32 useLearnedRank)
{
    SkillDataRecord *skill = skillDataFindById(skillId);
    if (skill == NULL) {
        return 0;
    }
    s32 baseCost = skill->cost.baseCost;
    s32 discount = 0;
    if (useLearnedRank == 0) {
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
    } else {
        discount += skillSumRankBonuses(skill, findLearnedSkillRank(skillId), 4);
    }
    s32 cost = baseCost - discount;
    return cost > 0 ? cost : 1;
}
}
