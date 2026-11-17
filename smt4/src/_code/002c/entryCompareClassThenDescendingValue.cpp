#include "common.h"
#include "gamedata/ItemSortCategory.h"
#include "gamedata/SkillDataLookup.h"

struct EntryRecordView {
    u8 unk00[0x2c]; // 0x00
    u16 unk2C;      // 0x2c
};

extern "C" {
s32 idIsAbove400(s32 id);
s32 itemSortCompareRankThenKey(s32 *left, s32 *right);

// Compare classification and descending record fields, delegating ties.
s32 entryCompareClassThenDescendingValue(s32 *left, s32 *right)
{
    s32 leftClass;
    u16 leftField;
    if (idIsAbove400(*left) != 0) {
        leftClass = 99;
        leftField = 0;
    } else {
        leftClass = itemGetSortCategory(*left);
        leftField = reinterpret_cast<EntryRecordView *>(skillDataFindById(*left))->unk2C;
    }

    s32 rightClass;
    u16 rightField;
    if (idIsAbove400(*right) != 0) {
        rightClass = 99;
        rightField = 0;
    } else {
        rightClass = itemGetSortCategory(*right);
        rightField = reinterpret_cast<EntryRecordView *>(skillDataFindById(*right))->unk2C;
    }

    s32 difference = leftClass - rightClass;
    if (difference == 0)
        difference = rightField - leftField;
    if (difference != 0)
        return difference;

    return itemSortCompareRankThenKey(left, right);
}
}
