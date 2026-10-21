#include "common.h"


extern "C" {
/* Reads or computes the requested value. */
f32 FUN_002941b0(f32 x, f32 unused, f32 z, f32 otherX, f32 otherUnused, f32 otherZ)
{
    f32 dx = otherX - x;
    f32 dz = otherZ - z;
    return __sqrtf(dx * dx + dz * dz);
}
}
