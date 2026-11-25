/* NON_MATCHING: comparison direction matches; circle deltas, sum and square-root use different VFP registers.
 * A single-use `squaredDistance` local passed to <math.h> sqrtf gives IDENTICAL (w93-s3) but only steers registers. */
#include "common.h"

extern "C" {

f32 sqrtf(f32 value);

s32 mathCirclesOverlap(f32 x, f32 y, f32 z, f32 radius, f32 otherX, f32 otherY, f32 otherZ, f32 otherRadius)
{
    f32 dx = x - otherX;
    f32 dz = z - otherZ;
    f32 distance = sqrtf(dx * dx + dz * dz);
    f32 combinedRadius = radius + otherRadius;
    return combinedRadius >= distance;
}

} /* extern "C" */
