#include "gamedata/ItemSortRecord.h"

static __inline s32 recordCategoryPriority(u8 category)
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
ItemSortRecord *FUN_002ae584(u32);

// Order table records by descending category priority and secondary sort value.
s32 itemCompareCategoryPriorityDescending(const u32 *left, const u32 *right)
{
    const ItemSortRecord *leftRecord = FUN_002ae584(*left);
    const ItemSortRecord *rightRecord = FUN_002ae584(*right);
    s32 difference = recordCategoryPriority(rightRecord->sort.category) - recordCategoryPriority(leftRecord->sort.category);
    if (difference == 0) {
        leftRecord = FUN_002ae584(*left);
        rightRecord = FUN_002ae584(*right);
        difference = rightRecord->sort.value - leftRecord->sort.value;
    }
    return difference;
}
}
