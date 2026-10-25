#include "common.h"
#include "shard/FUN_004c8284.h"

extern "C" {

s32 FUN_004c571c(u32 target, s32 command, u32 a, u32 b);

static __inline s32 absValue(s32 value)
{
    return value < 0 ? -value : value;
}

/* Runs the channel commands for `channel` (0, 1, 2, or 3 for all) and returns the sum of the
 * magnitudes the query commands 7, 10 and 11 report. */
s32 FUN_004c8284(u32 target, s32 channel, u32 a, u32 b)
{
    s32 total = 0;

    if (channel == 0 || channel == 3) {
        total += absValue(FUN_004c571c(target, 7, a, b));
        FUN_004c571c(target, 8, a, b);
    }
    if (channel == 1 || channel == 3) {
        total += absValue(FUN_004c571c(target, 10, a, b));
    }
    if (channel == 2 || channel == 3) {
        total += absValue(FUN_004c571c(target, 11, a, b));
        FUN_004c571c(target, 9, a, b);
    }
    return total;
}

} /* extern "C" */
