#include "gamedata/ItemSortRecord.h"

extern "C" const ItemSortRecord *appCostRecordFindById(u32 itemId);

static inline s32 itemCategoryPriority(u8 category)
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

extern "C" s32 itemCompareCategoryPriorityValue(const u32 *first, const u32 *second)
{
    const ItemSortRecord *left = appCostRecordFindById(*first);
    const ItemSortRecord *right = appCostRecordFindById(*second);
    s32 difference = itemCategoryPriority(left->sort.category) -
        itemCategoryPriority(right->sort.category);
    if (!difference) {
        left = appCostRecordFindById(*first);
        right = appCostRecordFindById(*second);
        difference = left->sort.value - right->sort.value;
    }
    return difference;
}
