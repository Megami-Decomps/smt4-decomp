#include "common.h"
#include "util/MathFunctions.h"


extern "C" {
/* Computes or forwards the requested value. */
f32 mathDistanceBetweenPoints(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ)
{
    f32 dx = otherX - x;
    f32 dy = otherY - y;
    f32 dz = otherZ - z;
    return __sqrtf(dx * dx + dy * dy + dz * dz);
}
}
