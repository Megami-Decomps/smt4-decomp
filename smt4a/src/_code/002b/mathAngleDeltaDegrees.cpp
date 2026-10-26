#include "common.h"
#include "util/MathFunctions_Smt4a.h"

extern "C" {

/* Returns the signed difference to - from between two angles in degrees, wrapped to the short way
 * round. */
f32 mathAngleDeltaDegrees(f32 from, f32 to)
{
    f32 diff;

    if (from < 0.0f || to < 0.0f) {
        from += 360.0f;
        to += 360.0f;
    }
    from = (s32)from % 360;
    to = (s32)to % 360;
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
