/* NON_MATCHING: learned-rank search remains scalar instead of pair-unrolled, and branch-local discount accumulation differs. */
#include "gamedata/Table04Record.h"
#include "shard/Shard004B.h"
#include "shard/FUN_0029a9d4.h"

namespace {
struct SkillCostDiscountView {
    u8 unk00[0x38];
    s32 discount;
};
typedef char SkillCostDiscountOffsetCheck[
    offsetof(SkillCostDiscountView, discount) == 0x38 ? 1 : -1];
}

static __inline u8 findLearnedSkillRank(const ItemRankRecord *player, u32 skillId)
{
    for (s32 index = 0; index < 8; ++index) {
        if (player->items[index] == skillId) {
            return (u8)player->ranks[index];
        }
    }
    return 0;
}

extern "C" {
Table04Record *dataTable40FindById(u32 skillId);
s32 FUN_00283ebc(Table04Record *skill, s32 rank, u32 modifier);
s32 flagBitIsSet(u32 flag);
SkillCostDiscountView *appCostRecordFindById(u16 id);
ItemRankRecord *gameGetPlayerData(void);

// Apply learned-rank or global cost discounts, keeping a nonzero skill's cost at least one.
s32 FUN_0029a9d4(u32 skillId, s32 useLearnedRank)
{
    Table04Record *skill = dataTable40FindById(skillId);
    if (skill == NULL) {
        return 0;
    }
    s32 baseCost = skill->cost.baseCost;
    s32 discount = 0;
    if (useLearnedRank != 0) {
        discount += FUN_00283ebc(skill, findLearnedSkillRank(gameGetPlayerData(), skillId), 4);
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
