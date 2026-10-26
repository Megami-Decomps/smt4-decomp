#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

static __inline u32 entrySortPackedRank(const EntrySortData* entry)
{
    // The aligned word at 0x24 overlaps the preserved byte-array view beginning at 0x22.
    return *reinterpret_cast<const u32*>(entry->unk22 + 2) >> 20;
}

// Compares the high twelve-bit packed rank ascending, then the table tie key ascending.
extern "C" s32 uiComparePackedEntryRankAscending(const SortItem* first, const SortItem* second)
{
    EntrySortData* a = dataTable08Sub2GetRecord(first->id);
    EntrySortData* b = dataTable08Sub2GetRecord(second->id);
    s32 order = entrySortPackedRank(a) - entrySortPackedRank(b);
    if (order == 0) {
        a = dataTable08Sub2GetRecord(first->id);
        b = dataTable08Sub2GetRecord(second->id);
        order = a->tieKey - b->tieKey;
    }
    return order;
}
