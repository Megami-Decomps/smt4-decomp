#include "gamedata/ItemSortRecord.h"

extern "C" {
s32 FUN_003811ec(const s32 *left, const s32 *right);
ItemSortRecord *dataTable04FindById(u32 id);
s32 FUN_003a6868(s32 id);
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
        leftRank = FUN_003a6868(*left);
        leftKey = dataTable04FindById(*left)->secondaryKey;
    }
    s32 rightRank;
    u16 rightKey;
    if (idIsAbove400(*right)) {
        rightRank = 99;
        rightKey = 0;
    } else {
        rightRank = FUN_003a6868(*right);
        rightKey = dataTable04FindById(*right)->secondaryKey;
    }
    s32 difference = rightRank - leftRank;
    if (difference == 0)
        difference = leftKey - rightKey;
    if (difference != 0)
        return difference;
    return FUN_003811ec(left, right);
}
}
