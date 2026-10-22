/* NON_MATCHING: retail keeps values in caller-saved VFP registers across the angle-difference call; separate compilation saves d8-d9. */
#include "common.h"

extern "C" f32 mathGetShortestAngleDelta(f32, f32);

// Move an angle toward its target by at most the requested step.
extern "C" f32 FUN_002535ec(f32 current, f32 target, f32 step)
{
    f32 difference = mathGetShortestAngleDelta(current, target);
    f32 distance = difference < 0.0f ? -difference : difference;
    if (distance <= step)
        return target;
    return difference < 0.0f ? current - step : current + step;
}
