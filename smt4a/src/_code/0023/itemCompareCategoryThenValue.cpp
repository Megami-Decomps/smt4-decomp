#include "gamedata/ItemSortRecord.h"

static __inline s32 keyedRecordCategoryRank(u8 category)
{
    switch (category) {
    case 5: return 1;
    case 0: return 2;
    case 1: return 3;
    case 4: return 4;
    case 3: return 5;
    default: return 0;
    }
}

extern "C" {
ItemSortRecord *dataFindKeyedRecordWithOverrides(u32 id);

// Sort record IDs by category priority, then by the record's order number.
s32 itemCompareCategoryThenValue(const u32 *left, const u32 *right)
{
    const ItemSortRecord *leftRecord = dataFindKeyedRecordWithOverrides(*left);
    const ItemSortRecord *rightRecord = dataFindKeyedRecordWithOverrides(*right);
    s32 difference = keyedRecordCategoryRank(leftRecord->sort.category) - keyedRecordCategoryRank(rightRecord->sort.category);
    if (difference == 0) {
        leftRecord = dataFindKeyedRecordWithOverrides(*left);
        rightRecord = dataFindKeyedRecordWithOverrides(*right);
        difference = leftRecord->sort.value - rightRecord->sort.value;
    }
    return difference;
}
}
