#include "common.h"

extern "C" {

/* Returns the signed shortest turn in degrees from angle `from` to angle `to`, after wrapping both
 * into [0, 360). */
f32 FUN_001f7c78(f32 from, f32 to)
{
    f32 diff;

    if (from < 0.0f || to < 0.0f) {
        from += 360.0f;
        to += 360.0f;
    }
    from = (f32)((s32)from % 360);
    to = (f32)((s32)to % 360);
    diff = from - to;
    if (diff > 180.0f || diff < -180.0f) {
        if (from < to) {
            from += 360.0f;
        } else {
            to += 360.0f;
        }
    }
    return to - from;
}

} /* extern "C" */
