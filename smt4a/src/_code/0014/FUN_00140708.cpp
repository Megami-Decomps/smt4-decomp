/* NON_MATCHING: instruction selection/order differs: retail ldr r2, [r1, #4]; compiler ldr r1, [r2, #4]. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern WorkRange DAT_005b3bc0;

/* Updates the bound when it lies within the configured range. */
bool FUN_00140708(u32 value)
{
    bool valid = value < DAT_005b3bc0.limit;
    if (valid) {
        DAT_005b3bc0.upper = value;
    }
    return valid;
}

} /* extern "C" */
