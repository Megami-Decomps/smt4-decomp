/* NON_MATCHING: retail picks high/low with `mov r4,r0; movlt r4,r1; movlt r1,r0` (low aliases b's register) where this build emits movgt/movle; `mov r1,r2` also lands after `mov r0,r3`. Twin of smt4 FUN_0026e6a0. */
#include "common.h"

extern "C" {

/* Triangle-wave blend between two values: with period `period`, `time` sweeps from the larger value down to the smaller and back
 * (or from the smaller up when `invert` is set). */
s32 FUN_001f3e80(s32 a, s32 b, s32 period, s32 time, s32 invert)
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
    s32 phase = time % period;
    offset = (phase - half) * range / half;
    if (offset < 0) {
        offset = -offset;
    }
    if (invert != 0) {
        offset = range - offset;
    }
    return high - offset;
}

} /* extern "C" */
