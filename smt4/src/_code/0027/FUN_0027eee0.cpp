#include "common.h"


extern "C" {
f32 mathGetShortestAngleDelta(f32 from, f32 to);
/* Returns the absolute shortest angular distance between two angles. */
f32 FUN_0027eee0(f32 from, f32 to)
{
    f32 value = mathGetShortestAngleDelta(from, to);
    return value < 0.0f ? -value : value;
}
}
