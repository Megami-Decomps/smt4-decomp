#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Compares the twelve-bit attribute ascending, then the table tie key ascending.
extern "C" s32 uiComparePackedEntryRankAscending(const SortItem* first, const SortItem* second)
{
    EquipmentRecordA* a = itemTableGetEquipmentRecord(first->id);
    EquipmentRecordA* b = itemTableGetEquipmentRecord(second->id);
    s32 order = (a->traits >> 20) - (b->traits >> 20);
    if (order == 0) {
        a = itemTableGetEquipmentRecord(first->id);
        b = itemTableGetEquipmentRecord(second->id);
        order = a->order - b->order;
    }
    return order;
}
