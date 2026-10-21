/* NON_MATCHING: retail uses `vsub.f32 s0, s0, s4` where armcc emits `vsub.f32 s1, s0, s4`. */
#include "common.h"

extern "C" {

f32 sqrtf(f32 value);

s32 mathCirclesOverlap(f32 x, f32 y, f32 z, f32 radius, f32 otherX, f32 otherY, f32 otherZ, f32 otherRadius)
{
    f32 dx = x - otherX;
    f32 dz = z - otherZ;
    return radius + otherRadius >= sqrtf(dx * dx + dz * dz);
}

} /* extern "C" */
