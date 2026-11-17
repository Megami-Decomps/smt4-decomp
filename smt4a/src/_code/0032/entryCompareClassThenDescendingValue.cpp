#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {
s32 idIsAbove400(s32 id);
s32 itemSortCompareRankThenKey(s32 *left, s32 *right);

// Compare classification and record fields before delegating tied entries.
s32 entryCompareClassThenDescendingValue(s32 *left, s32 *right)
{
    s32 leftClass;
    u16 leftField;
    if (idIsAbove400(*left) != 0) {
        leftClass = 99;
        leftField = 0;
    } else {
        leftClass = itemGetSortCategory(*left);
        leftField = skillDataFindById(*left)->listing.sortKey;
    }

    s32 rightClass;
    u16 rightField;
    if (idIsAbove400(*right) != 0) {
        rightClass = 99;
        rightField = 0;
    } else {
        rightClass = itemGetSortCategory(*right);
        rightField = skillDataFindById(*right)->listing.sortKey;
    }

    s32 difference = leftClass - rightClass;
    if (difference == 0)
        difference = rightField - leftField;
    if (difference != 0)
        return difference;

    return itemSortCompareRankThenKey(left, right);
}
}
