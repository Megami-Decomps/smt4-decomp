#include "common.h"
#include "util/MathFunctions.h"


extern "C" {
/* Returns the absolute angle difference in degrees. */
f32 FUN_0033abb4(f32 from, f32 to)
{
    f32 value = mathAngleDeltaDegrees(from, to);
    return value < 0.0f ? -value : value;
}
}
