#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" const LookupSortKeys* FUN_002ae584(u32 id);

// Compare record IDs by descending primary key, then descending secondary key.
extern "C" s32 gauntletAppCompareBySortKeysDescending(const u32* leftId, const u32* rightId)
{
    const LookupSortKeys* left = FUN_002ae584(*leftId);
    const LookupSortKeys* right = FUN_002ae584(*rightId);
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        left = FUN_002ae584(*leftId);
        right = FUN_002ae584(*rightId);
        difference = right->secondary - left->secondary;
    }
    return difference;
}
