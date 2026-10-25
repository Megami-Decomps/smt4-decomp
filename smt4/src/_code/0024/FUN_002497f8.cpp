/* NON_MATCHING: category/rank keys are assigned to different callee-saved registers (declaring the four locals in the order rightCategory, leftCategory, rightRank, leftRank at the top matches, but that is declaration-order steering). */
#include "gamedata/ItemSortRecord.h"
#include "shard/PassiveSkill.h"
#include "shard/W6_W6Match5_DevilSort.h"

extern "C" {
u32 idIsAbove400(u32 id);
u32 FUN_0024c5a0(u32 id);
u32 recordKindRank(u32 id);
const ItemSortRecord* dataTable40FindById(u32 id);
const GameUnitSortRecord* gameGetUnitRecord(u32 index);

// Order by descending category/rank, ascending secondary key, then descending skill/owner ids.
s32 FUN_002497f8(const SkillListEntry* left, const SkillListEntry* right)
{
    s32 leftCategory;
    s32 leftRank;
    u16 leftKey;
    if (idIsAbove400(left->skillId) != 0) {
        leftCategory = 99;
        leftRank = 99;
        leftKey = 0;
    } else {
        leftCategory = FUN_0024c5a0(left->skillId);
        leftRank = recordKindRank(left->skillId);
        leftKey = dataTable40FindById(left->skillId)->secondaryKey;
    }
    s32 rightCategory;
    s32 rightRank;
    u16 rightKey;
    if (idIsAbove400(right->skillId) != 0) {
        rightCategory = 99;
        rightRank = 99;
        rightKey = 0;
    } else {
        rightCategory = FUN_0024c5a0(right->skillId);
        rightRank = recordKindRank(right->skillId);
        rightKey = dataTable40FindById(right->skillId)->secondaryKey;
    }
    s32 difference = rightCategory - leftCategory;
    if (difference == 0) {
        difference = rightRank - leftRank;
    }
    if (difference != 0) {
        return difference;
    }
    difference = leftKey - rightKey;
    if (difference != 0) {
        return difference;
    }
    difference = (s32)(right->skillId - left->skillId);
    if (difference != 0) {
        return difference;
    }
    u16 leftOwner = left->unit < 0 ? 0 : gameGetUnitRecord(left->unit)->id;
    u16 rightOwner = right->unit < 0 ? 0 : gameGetUnitRecord(right->unit)->id;
    return rightOwner - leftOwner;
}
}
