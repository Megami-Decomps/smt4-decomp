#include "gamedata/ItemSortRecord.h"

extern "C" {
s32 FUN_002497f8(const s32 *left, const s32 *right);
ItemSortRecord *FUN_002ae164(u32 id);
s32 FUN_0024c52c(s32 id);
s32 idIsAbove400(s32 id);

// Compare by descending category rank, ascending record key, then the existing tie break.
s32 itemCompareCategoryDescendingValueAscending(const s32 *left, const s32 *right)
{
    s32 leftRank;
    u16 leftKey;
    if (idIsAbove400(*left)) {
        leftRank = 99;
        leftKey = 0;
    } else {
        leftRank = FUN_0024c52c(*left);
        leftKey = FUN_002ae164(*left)->secondaryKey;
    }
    s32 rightRank;
    u16 rightKey;
    if (idIsAbove400(*right)) {
        rightRank = 99;
        rightKey = 0;
    } else {
        rightRank = FUN_0024c52c(*right);
        rightKey = FUN_002ae164(*right)->secondaryKey;
    }
    s32 difference = rightRank - leftRank;
    if (difference == 0)
        difference = leftKey - rightKey;
    if (difference != 0)
        return difference;
    return FUN_002497f8(left, right);
}
}
