/* NON_MATCHING: retail uses s1 for the 0.0 constant; the build (in a multifile run with mathAngleDeltaDegrees,
 * which keeps s4-s6 live across the call as retail does) uses s2. */
#include "common.h"
#include "util/MathFunctions.h"

// Move an angle toward its target by at most the requested step.
extern "C" f32 FUN_00303a5c(f32 current, f32 target, f32 step)
{
    f32 difference = mathAngleDeltaDegrees(current, target);
    f32 distance = difference;
    if (distance < 0.0f)
        distance = -distance;
    if (distance <= step)
        return target;
    return difference < 0.0f ? current - step : current + step;
}
