#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" const LookupSortKeys* appCostRecordFindById(u32 id);

// Compare record IDs by descending primary key, then descending secondary key.
extern "C" s32 gauntletAppCompareBySortKeysDescending(const u32* leftId, const u32* rightId)
{
    const LookupSortKeys* left = appCostRecordFindById(*leftId);
    const LookupSortKeys* right = appCostRecordFindById(*rightId);
    s32 difference = right->primary - left->primary;
    if (difference == 0) {
        left = appCostRecordFindById(*leftId);
        right = appCostRecordFindById(*rightId);
        difference = right->secondary - left->secondary;
    }
    return difference;
}
