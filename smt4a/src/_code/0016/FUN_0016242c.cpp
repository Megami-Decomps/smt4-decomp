/* NON_MATCHING: float scheduling: retail compares time against duration as (time, duration) with bge and avoids vmla, we swap the compare and fuse the multiply-add */
#include "common.h"

extern "C" {

f32 FUN_001a1ea8(u16 angle);

/* Eases from `from` to `to` over `duration`: 0 duration returns `to`, a time at or below 0 returns `from`,
 * and in between a sine curve (angle in 1/65536 turns) weights the two. */
f32 FUN_0016242c(f32 from, f32 to, f32 duration, f32 time)
{
    f32 result = to;

    if (duration != 0.0f) {
        if (time <= 0.0f) {
            result = from;
        } else if (time < duration) {
            u16 angle = (u16)(time * 16384.0f / duration + 49152.0f);

            result = from + (to - from) * (FUN_001a1ea8(angle) + 1.0f);
        }
    }
    return result;
}

} /* extern "C" */
