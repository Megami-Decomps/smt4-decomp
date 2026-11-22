#include "shard/W6_W6Match6_CollisionQuad.h"
#include <math.h>

extern "C" {
/* Resolves two overlapping circles on the XZ plane: moves the first out of the second, keeping its height. */
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
    if (radius >= distance) {
        /* Push the first centre out along the unit direction, keeping its height. */
        f32 directionX = dx / distance;
        f32 directionZ = dz / distance;
        first.x = second.x + directionX * radius;
        first.z = second.z + directionZ * radius;
        *result = first;
        return true;
    }
    *result = first;
    return false;
}
}
