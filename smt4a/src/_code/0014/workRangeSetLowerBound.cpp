#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern WorkRange DAT_005b3bc0;

/* Updates the bound when it lies within the configured range. */
bool workRangeSetLowerBound(u32 value)
{
    u32 limit = DAT_005b3bc0.limit;
    if (value >= limit) {
        return false;
    }
    DAT_005b3bc0.lower = value;
    return true;
}

} /* extern "C" */
