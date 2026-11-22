#include "common.h"
extern "C" {
f32 mathInterpolateTimed(s32 elapsed, s32 duration, f32 start, f32 target);

/* Interpolates toward the target; once the time is up or the value reaches or passes the target,
 * snaps it to the target and reports completion. */
u32 timedValueInterpolateStep(f32 *value, s32 elapsed, s32 duration, f32 start, f32 target)
{
    bool done = false;
    *value = mathInterpolateTimed(elapsed, duration, start, target);
    if (duration == elapsed) {
        done = true;
    }
    if (target - start > 0.0f) {
        if (*value >= target) {
            done = true;
        }
    } else if (*value <= target) {
        done = true;
    }
    if (done) {
        *value = target;
        return 1;
    }
    return 0;
}
}
