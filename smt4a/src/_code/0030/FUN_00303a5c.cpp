#include "common.h"
#include "util/MathFunctions.h"

// Move an angle toward its target by at most the requested step.
extern "C" f32 FUN_00303a5c(f32 current, f32 target, f32 step)
{
    f32 difference = mathAngleDeltaDegrees(current, target);
    f32 distance = difference;
    f32 result;

    if (distance < 0.0f)
        distance = -distance;
    if (distance <= step)
        result = target;
    else if (difference < 0.0f)
        result = current - step;
    else
        result = current + step;
    return result;
}
