#include "shard/W6_W6Match3_LookupSortKeys.h"

extern "C" {
u32 gameDataFlagTestBit(s32 id);
const LookupSortKeys* FUN_00186f58(u32 id);

// Compare flag differences first, then the table's secondary key descending.
s32 FUN_002b2c44(const s32* first, const s32* second)
{
    u32 firstFlags = gameDataFlagTestBit(*first);
    s32 result = 0;
    u32 secondFlags = gameDataFlagTestBit(*second);
    if ((firstFlags & ~secondFlags) != 0) {
        result = 1;
    }
    if ((secondFlags & ~firstFlags) != 0) {
        result = -1;
    } else if (result == 0) {
        const LookupSortKeys* a = FUN_00186f58(*first);
        const LookupSortKeys* b = FUN_00186f58(*second);
        result = b->secondary - a->secondary;
    }
    return result;
}
}
