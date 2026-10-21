/* NON_MATCHING: vector inputs recover the VFP ABI and branch condition, but squared-distance/division registers differ and the returned overlap boolean adds one move. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

extern "C" {
// Resolve overlapping XZ circles; preserve the first center's height.
bool mapResolveCircleOverlapXZ(CollisionVector *result, CollisionVector first, f32 firstRadius,
                  CollisionVector second, f32 secondRadius)
{
    f32 dx = first.x - second.x;
    f32 dz = first.z - second.z;
    f32 distance = sqrtf(dx * dx + dz * dz);
    if (distance == 0.0f) {
        distance = 0.01f;
    }
    f32 radius = firstRadius + secondRadius;
    bool overlap = radius >= distance;
    if (overlap) {
        result->x = second.x + (dx / distance) * radius;
        result->y = first.y;
        result->z = second.z + (dz / distance) * radius;
    }
    else {
        *result = first;
    }
    return overlap;
}
}
