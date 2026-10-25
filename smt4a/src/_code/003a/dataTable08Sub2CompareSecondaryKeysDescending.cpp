#include "util/DataTable08Sub2GetRecord.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" s32 dataTable08Sub2CompareSecondaryKeysDescending(const SortItem* leftId, const SortItem* rightId)
{
    const EntrySortData* left = dataTable08Sub2GetRecord(leftId->id);
    const EntrySortData* right = dataTable08Sub2GetRecord(rightId->id);
    s32 difference = right->secondarySort.key - left->secondarySort.key;
    if (difference == 0) {
        left = dataTable08Sub2GetRecord(leftId->id);
        right = dataTable08Sub2GetRecord(rightId->id);
        difference = right->tieKey - left->tieKey;
    }
    return difference;
}
