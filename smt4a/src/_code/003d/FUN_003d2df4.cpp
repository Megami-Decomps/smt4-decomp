/* NON_MATCHING: cross-product VFP allocation differs, and retail hoists the 0.0f constant (s2) before the cross product with the epsilon in r4/r5/ip instead of r4/ip/r5. */
#include "gfx/Plane.h"
#include <math.h>

extern "C" {

static inline void planeSnapNegligible(f32 *component)
{
    if (planeComponentIsNegligible(*component)) {
        *component = 0.0f;
    }
}

// Compute a normalized plane through three points, snapping tiny normal components to zero.
void FUN_003d2df4(f32 *normalX, f32 *normalY, f32 *normalZ, f32 *distance,
                  f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz,
                  f32 cx, f32 cy, f32 cz)
{
    *normalX = (by - ay) * (cz - bz) - (bz - az) * (cy - by);
    *normalY = (bz - az) * (cx - bx) - (bx - ax) * (cz - bz);
    f32 crossZ = (bx - ax) * (cy - by) - (by - ay) * (cx - bx);
    *normalZ = crossZ;
    f32 x = *normalX;
    f32 inverseLength = 1.0f / sqrtf(x * x + *normalY * *normalY + crossZ * crossZ);
    *normalX = x * inverseLength;
    *normalY *= inverseLength;
    *normalZ *= inverseLength;
    planeSnapNegligible(normalX);
    planeSnapNegligible(normalY);
    planeSnapNegligible(normalZ);
    *distance = -(*normalX * cx + *normalY * cy + *normalZ * cz);
}
}
