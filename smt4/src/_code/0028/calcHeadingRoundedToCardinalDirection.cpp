#include "common.h"

extern "C" {
// Wrap to one revolution and round to the nearest cardinal heading.
f32 calcHeadingRoundedToCardinalDirection(f32 angle)
{
    while (angle >= 360.0f) {
        angle -= 360.0f;
    }
    while (angle < 0.0f) {
        angle += 360.0f;
    }
    f32 step = 360.0f / 4.0f;
    angle += step * 0.5f;
    return (f32)(s32)(angle / step) * step;
}
}
