/* NON_MATCHING: only scheduling remains: retail computes `range` before `half`'s final shift and moves the time argument into r0 before the period into r1. Twin of smt4a FUN_001f3e80. */
#include "common.h"

extern "C" {

/* Triangle-wave blend between two values: with period `period`, `time` sweeps from the larger value down to the smaller and back
 * (or from the smaller up when `invert` is set). */
s32 FUN_0026e6a0(s32 a, s32 b, s32 period, s32 time, s32 invert)
{
    s32 low = b;
    s32 high = a;
    if (a < b) {
        high = b;
        low = a;
    }
    if (period == 0) {
        return high;
    }
    s32 half = period / 2;
    s32 range = high - low;
    if (time < 0) {
        time = -time;
    }
    s32 offset = (time % period - half) * range / half;
    if (offset < 0) {
        offset = -offset;
    }
    if (invert != 0) {
        offset = range - offset;
    }
    return high - offset;
}

} /* extern "C" */
