#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Compares the twelve-bit attribute ascending, then the table tie key ascending.
extern "C" s32 uiComparePackedEntryRankAscending(const SortItem* first, const SortItem* second)
{
    EquipmentRecordA* a = dataTable08Sub2GetRecord(first->id);
    EquipmentRecordA* b = dataTable08Sub2GetRecord(second->id);
    s32 order = (a->traits >> 20) - (b->traits >> 20);
    if (order == 0) {
        a = dataTable08Sub2GetRecord(first->id);
        b = dataTable08Sub2GetRecord(second->id);
        order = a->order - b->order;
    }
    return order;
}
