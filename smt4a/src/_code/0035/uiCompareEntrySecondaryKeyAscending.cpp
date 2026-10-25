#include "util/DataTable08Sub2GetRecord.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Sorts entries by the secondary byte key ascending, then the table tie key ascending.
extern "C" s32 uiCompareEntrySecondaryKeyAscending(const SortItem* first, const SortItem* second)
{
    EntrySortData* a = dataTable08Sub2GetRecord(first->id);
    EntrySortData* b = dataTable08Sub2GetRecord(second->id);
    s32 order = a->secondarySort.key - b->secondarySort.key;
    if (order == 0) {
        a = dataTable08Sub2GetRecord(first->id);
        b = dataTable08Sub2GetRecord(second->id);
        order = a->tieKey - b->tieKey;
    }
    return order;
}
