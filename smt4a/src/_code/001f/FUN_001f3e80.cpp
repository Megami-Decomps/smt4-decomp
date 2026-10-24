/* NON_MATCHING: twin of smt4 FUN_0026e6a0 */
#include "common.h"

extern "C" {

/* Triangle-wave blend between two values: with period `period`, `time` sweeps from the larger value down to the smaller and back
 * (or from the smaller up when `invert` is set). */
s32 FUN_001f3e80(s32 a, s32 b, s32 period, s32 time, s32 invert)
{
    s32 high = a;
    s32 low = b;
    s32 half;
    s32 range;
    s32 offset;

    if (a < b) {
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
