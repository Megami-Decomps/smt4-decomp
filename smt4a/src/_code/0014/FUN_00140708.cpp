#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern WorkRange DAT_005b3bc0;

/* Updates the bound when it lies within the configured range. */
bool FUN_00140708(u32 value)
{
    u32 limit = DAT_005b3bc0.limit;
    if (value >= limit) {
        return false;
    }
    DAT_005b3bc0.upper = value;
    return true;
}

} /* extern "C" */
