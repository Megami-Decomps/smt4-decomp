/* NON_MATCHING: The output pointer and completion flag use different saved registers. */
#include "common.h"
extern "C" {
f32 mathInterpolateTimed(s32 elapsed, s32 duration, f32 start, f32 target);

// Interpolates toward the target, clamps overshoot, and reports completion.
u32 FUN_002e1c94(f32* value, s32 elapsed, s32 duration, f32 start, f32 target)
{
    s32 complete = 0;
    f32 interpolated = mathInterpolateTimed(elapsed, duration, start, target);
    *value = interpolated;
    if (duration == elapsed) {
        complete = 1;
    }
    if (target - start > 0.0f) {
        if (interpolated >= target) {
            *value = target;
            return 1;
        }
    } else if (interpolated <= target) {
        *value = target;
        return 1;
    }
    if (!complete) {
        return 0;
    }
    *value = target;
    return 1;
}
}