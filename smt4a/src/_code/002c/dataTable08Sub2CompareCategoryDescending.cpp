#include "shard/W5_W5Match7_EntrySort.h"

// Sort entry IDs by descending category, then ascending tie key.
extern "C" s32 dataTable08Sub2CompareCategoryDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EntrySortData* left = FUN_00192608(leftId->id);
    const EntrySortData* right = FUN_00192608(rightId->id);
    s32 difference = right->sort.category - left->sort.category;
    if (difference == 0) {
        left = FUN_00192608(leftId->id);
        right = FUN_00192608(rightId->id);
        difference = left->tieKey - right->tieKey;
    }
    return difference;
}
