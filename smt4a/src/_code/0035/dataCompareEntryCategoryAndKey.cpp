#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "shard/W5_W5Match7_EntrySort.h"

// Sort categories ascending, then order each category by descending tie key.
extern "C" s32 dataCompareEntryCategoryAndKey(const SortItem *left, const SortItem *right)
{
    EntrySortData *leftData = dataTable08Sub2GetRecord(left->id);
    EntrySortData *rightData = dataTable08Sub2GetRecord(right->id);
    s32 result = leftData->sort.category - rightData->sort.category;
    if (result == 0) {
        leftData = dataTable08Sub2GetRecord(left->id);
        rightData = dataTable08Sub2GetRecord(right->id);
        result = rightData->tieKey - leftData->tieKey;
    }
    return result;
}
