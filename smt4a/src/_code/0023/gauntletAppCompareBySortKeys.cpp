#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" const LookupSortKeys* dataFindKeyedRecordWithOverrides(u32 id);

// Compare record IDs by their primary key, then resolve ties by the secondary key.
extern "C" s32 gauntletAppCompareBySortKeys(const u32* leftId, const u32* rightId)
{
    const LookupSortKeys* left = dataFindKeyedRecordWithOverrides(*leftId);
    const LookupSortKeys* right = dataFindKeyedRecordWithOverrides(*rightId);
    s32 difference = left->primary - right->primary;
    if (difference == 0) {
        left = dataFindKeyedRecordWithOverrides(*leftId);
        right = dataFindKeyedRecordWithOverrides(*rightId);
        difference = left->secondary - right->secondary;
    }
    return difference;
}
