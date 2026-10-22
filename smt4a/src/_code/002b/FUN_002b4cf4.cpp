#include "common.h"

extern "C" {

/* Signed difference from angle `from` to angle `to` in whole degrees, taking the shorter way round. */
f32 FUN_002b4cf4(f32 from, f32 to)
{
    f32 difference;

    if (from < 0.0f || to < 0.0f) {
        from += 360.0f;
        to += 360.0f;
    }
    from = (f32)((s32)from % 360);
    to = (f32)((s32)to % 360);
    difference = from - to;
    if (difference > 180.0f || difference < -180.0f) {
        if (from < to) {
            from += 360.0f;
        } else {
            to += 360.0f;
        }
    }
    return to - from;
}

} /* extern "C" */
