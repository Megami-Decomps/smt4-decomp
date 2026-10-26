#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Sort entry IDs by descending category, then ascending tie key.
extern "C" s32 dataTable08Sub2CompareCategoryDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EntrySortData* left = dataTable08Sub2GetRecord(leftId->id);
    const EntrySortData* right = dataTable08Sub2GetRecord(rightId->id);
    s32 difference = right->sort.category - left->sort.category;
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(leftId->id);
        right = dataTable08Sub2GetRecord(rightId->id);
        difference = left->tieKey - right->tieKey;
    }
    return difference;
}
