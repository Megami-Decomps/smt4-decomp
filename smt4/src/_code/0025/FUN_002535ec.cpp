#include "common.h"
extern "C" f32 mathGetShortestAngleDelta(f32, f32);

/* Moves an angle toward its target by at most the requested step (built in a multifile run with
 * mathGetShortestAngleDelta, as its smt4a twin FUN_00303a5c is with mathAngleDeltaDegrees). */
extern "C" f32 FUN_002535ec(f32 current, f32 target, f32 step)
{
    f32 difference = mathGetShortestAngleDelta(current, target);
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
