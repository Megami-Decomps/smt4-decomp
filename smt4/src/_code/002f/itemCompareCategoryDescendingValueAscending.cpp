#include "gamedata/ItemSortRecord.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/DataTable40.h"

extern "C" {
s32 itemSortCompareByCategoryAndId(const s32 *left, const s32 *right);
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
        leftRank = itemGetSortCategory(*left);
        leftKey = reinterpret_cast<ItemSortRecord *>(dataTable40FindById(*left))->secondaryKey;
    }
    s32 rightRank;
    u16 rightKey;
    if (idIsAbove400(*right)) {
        rightRank = 99;
        rightKey = 0;
    } else {
        rightRank = itemGetSortCategory(*right);
        rightKey = reinterpret_cast<ItemSortRecord *>(dataTable40FindById(*right))->secondaryKey;
    }
    s32 difference = rightRank - leftRank;
    if (difference == 0)
        difference = leftKey - rightKey;
    if (difference != 0)
        return difference;
    return itemSortCompareByCategoryAndId(left, right);
}
}
