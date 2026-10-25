#include "common.h"


extern "C" {
f32 mathAngleDeltaDegrees(f32 from, f32 to);
/* Returns the absolute angle difference in degrees. */
f32 FUN_0033abb4(f32 from, f32 to)
{
    f32 value = mathAngleDeltaDegrees(from, to);
    return value < 0.0f ? -value : value;
}
}
