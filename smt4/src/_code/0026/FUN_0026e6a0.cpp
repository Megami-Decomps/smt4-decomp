/* NON_MATCHING: identical at `-O2 -Otime` except the order of `mov r0, r3` / `mov r1, r2` before the first __aeabi_idivmod; at the default -O3 the argument shuffling and prologue differ more */
#include "common.h"

extern "C" {

/* Triangle-wave blend between two values: with period `period`, `time` sweeps from the larger value down to the smaller and back
 * (or from the smaller up when `invert` is set). */
s32 FUN_0026e6a0(s32 a, s32 b, s32 period, s32 time, s32 invert)
{
    s32 high;
    s32 low;
    s32 half;
    s32 range;
    s32 offset;

    if (a > b) {
        high = a;
        low = b;
    } else {
        high = b;
        low = a;
    }
    if (period == 0) {
        return high;
    }
    range = high - low;
    half = period / 2;
    if (time < 0) {
        time = -time;
    }
    offset = (time % period - half) * range / half;
    if (offset < 0) {
        offset = -offset;
    }
    if (invert != 0) {
        offset = range - offset;
    }
    return high - offset;
}

} /* extern "C" */
