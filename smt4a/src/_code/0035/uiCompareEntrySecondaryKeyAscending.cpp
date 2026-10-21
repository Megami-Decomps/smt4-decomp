#include "shard/W5_W5Match7_EntrySort.h"

// Sorts entries by the secondary byte key ascending, then the table tie key ascending.
extern "C" s32 uiCompareEntrySecondaryKeyAscending(const SortItem* first, const SortItem* second)
{
    EntrySortData* a = FUN_00192608(first->id);
    EntrySortData* b = FUN_00192608(second->id);
    s32 order = a->secondarySort.key - b->secondarySort.key;
    if (order == 0) {
        a = FUN_00192608(first->id);
        b = FUN_00192608(second->id);
        order = a->tieKey - b->tieKey;
    }
    return order;
}
