/* NON_MATCHING: only the 0.0 comparison constant is materialised in s2 where retail uses s1 (multifile mathGetShortestAngleDelta keeps the frame). */
#include "common.h"

extern "C" f32 mathGetShortestAngleDelta(f32, f32);

// Move an angle toward its target by at most the requested step.
extern "C" f32 FUN_002535ec(f32 current, f32 target, f32 step)
{
    f32 difference = mathGetShortestAngleDelta(current, target);
    f32 distance = difference;
    if (distance < 0.0f)
        distance = -distance;
    if (distance <= step)
        return target;
    return difference < 0.0f ? current - step : current + step;
}
