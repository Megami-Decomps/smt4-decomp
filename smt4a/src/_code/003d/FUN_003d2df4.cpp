/* NON_MATCHING: cross-product VFP allocation and the integer zero-snap comparison registers differ. */
#include "gfx/Plane.h"
#include <math.h>

extern "C" {

// Compute a normalized plane through three points, snapping tiny normal components to zero.
void FUN_003d2df4(f32 *normalX, f32 *normalY, f32 *normalZ, f32 *distance,
                  f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz,
                  f32 cx, f32 cy, f32 cz)
{
    f32 crossZ = (bx - ax) * (cy - by) - (by - ay) * (cx - bx);
    *normalX = (by - ay) * (cz - bz) - (bz - az) * (cy - by);
    *normalY = (bz - az) * (cx - bx) - (bx - ax) * (cz - bz);
    *normalZ = crossZ;
    f32 x = *normalX;
    f32 inverseLength = 1.0f / sqrtf(x * x + *normalY * *normalY + crossZ * crossZ);
    *normalX = x * inverseLength;
    *normalY *= inverseLength;
    *normalZ *= inverseLength;
    if (planeComponentIsNegligible(*normalX)) {
        *normalX = 0.0f;
    }
    if (planeComponentIsNegligible(*normalY)) {
        *normalY = 0.0f;
    }
    if (planeComponentIsNegligible(*normalZ)) {
        *normalZ = 0.0f;
    }
    *distance = -(*normalX * cx + *normalY * cy) - *normalZ * cz;
}
}
