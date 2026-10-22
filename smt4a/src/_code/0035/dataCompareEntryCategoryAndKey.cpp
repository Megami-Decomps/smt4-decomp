#include "shard/W5_W5Match7_EntrySort.h"

// Sort categories ascending, then order each category by descending tie key.
extern "C" s32 dataCompareEntryCategoryAndKey(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = FUN_00192608(left->id);
    EntrySortData *rightData = FUN_00192608(right->id);
    s32 result = leftData->sort.category - rightData->sort.category;
    if (result == 0) {
        leftData = FUN_00192608(left->id);
        rightData = FUN_00192608(right->id);
        result = rightData->tieKey - leftData->tieKey;
    }
    return result;
}
