#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" const LookupSortKeys* FUN_00186f58(u32 id);

// Compare record IDs by their primary key, then resolve ties by the secondary key.
extern "C" s32 gauntletAppCompareBySortKeys(const u32* leftId, const u32* rightId)
{
    const LookupSortKeys* left = FUN_00186f58(*leftId);
    const LookupSortKeys* right = FUN_00186f58(*rightId);
    s32 difference = left->primary - right->primary;
    if (difference == 0) {
        left = FUN_00186f58(*leftId);
        right = FUN_00186f58(*rightId);
        difference = left->secondary - right->secondary;
    }
    return difference;
}
