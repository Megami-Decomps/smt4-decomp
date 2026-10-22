#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" const LookupSortKeys* dataFindKeyedRecordWithOverrides(u32 id);

// Compare record IDs by descending primary key, then descending secondary key.
extern "C" s32 gauntletAppCompareBySortKeysDescending(const u32* leftId, const u32* rightId)
{
    const LookupSortKeys* left = dataFindKeyedRecordWithOverrides(*leftId);
    const LookupSortKeys* right = dataFindKeyedRecordWithOverrides(*rightId);
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        left = dataFindKeyedRecordWithOverrides(*leftId);
        right = dataFindKeyedRecordWithOverrides(*rightId);
        difference = right->secondary - left->secondary;
    }
    return difference;
}
