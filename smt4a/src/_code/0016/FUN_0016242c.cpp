/* NON_MATCHING: only the in-place vmul/vdiv register of the angle computation differs. */
#include "common.h"

extern "C" {

f32 mathInterpolatePackedTable(u16 angle);

/* Eases from `from` to `to` over `duration`: 0 duration returns `to`, a time at or below 0 returns `from`,
 * and in between a sine curve (angle in 1/65536 turns) weights the two. */
f32 FUN_0016242c(f32 from, f32 to, f32 duration, f32 time)
{
    if (duration == 0.0f) {
        return to;
    }
    if (time <= 0.0f) {
        return from;
    }
    if (time >= duration) {
        return to;
    }
    f32 delta = to - from;
    u16 angle = (u16)(time * 16384.0f / duration + 49152.0f);
    f32 weight = mathInterpolatePackedTable(angle) + 1.0f;
    f32 offset = weight * delta;

    return offset + from;
}

} /* extern "C" */
