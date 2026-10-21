/* NON_MATCHING: all default instructions match except sector division/conversion use s0 instead of retail's s2 quotient. */
#include "common.h"

extern "C" {
// Wrap to one revolution and round to the nearest of32 heading sectors.
f32 calcHeadingRoundedTo32Directions(f32 angle)
{
    while (angle >= 360.0f) {
        angle -= 360.0f;
    }
    while (angle < 0.0f) {
        angle += 360.0f;
    }
    f32 step = 360.0f / 32.0f;
    angle += step * 0.5f;
    return (f32)(s32)(angle / step) * step;
}
}
