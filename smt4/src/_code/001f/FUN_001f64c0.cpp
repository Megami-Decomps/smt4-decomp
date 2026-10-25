#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" {
u32 flagBitIsSet(s32 id);
const LookupSortKeys* appCostRecordFindById(u32 id);

// Compare flag differences first, then the table's secondary key descending.
s32 FUN_001f64c0(const s32* first, const s32* second)
{
    u32 firstFlags = flagBitIsSet(*first);
    s32 result = 0;
    u32 secondFlags = flagBitIsSet(*second);
    if ((firstFlags & ~secondFlags) != 0) {
        result = 1;
    }
    if ((secondFlags & ~firstFlags) != 0) {
        result = -1;
    } else if (result == 0) {
        const LookupSortKeys* a = appCostRecordFindById(*first);
        const LookupSortKeys* b = appCostRecordFindById(*second);
        result = b->secondary - a->secondary;
    }
    return result;
}
}
