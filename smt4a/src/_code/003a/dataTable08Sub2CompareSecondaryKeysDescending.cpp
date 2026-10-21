#include "shard/W5_W5Match7_EntrySort.h"

extern "C" s32 dataTable08Sub2CompareSecondaryKeysDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EntrySortData* left = FUN_00192608(leftId->id);
    const EntrySortData* right = FUN_00192608(rightId->id);
    s32 difference = right->secondarySort.key - left->secondarySort.key;
    if (difference == 0) {
        left = FUN_00192608(leftId->id);
        right = FUN_00192608(rightId->id);
        difference = right->tieKey - left->tieKey;
    }
    return difference;
}
