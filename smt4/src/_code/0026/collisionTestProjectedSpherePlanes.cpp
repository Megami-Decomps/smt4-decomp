/* NON_MATCHING: axis projections and plane-distance loads occupy different VFP registers, and address scheduling adds a saved register. */
#include "shard/W6_W6Match7_CollisionPlanes.h"

extern "C" {
// Project the sphere center onto an axis plane and test its collision half-spaces.
u32 collisionTestProjectedSpherePlanes(f32 *distanceOut, s32 axis, s32 planeCount, const CollisionPlanes *planes,
                 f32 x, f32 y, f32 z, f32 radius)
{
    f32 extent = 120.0f;
    f32 u, v;
    u32 intersects = 0;
    if (axis == 0) {
        u = y;
        v = z;
        x = 0.0f;
    } else {
        u = x;
        if (axis == 1) {
            extent = 50.0f;
            v = z;
            y = 0.0f;
        } else {
            v = y;
            z = 0.0f;
        }
    }
    CollisionDistance result;
    result.value = radius;
    for (s32 i = 0; i < planeCount; ++i) {
        f32 distance = x * planes->normals[i].x + y * planes->normals[i].y +
                       z * planes->normals[i].z - planes->distances[i];
        if (distance + radius < 0.0f ||
            (planeCount == 3 &&
             (u < planes->minimumU - radius || v < planes->minimumV - radius ||
              planes->maximumU + radius < u || planes->maximumV + radius < v))) {
            *distanceOut = -1.0f;
            return 0xffffffff;
        }
        if (distance < 0.0f) {
            if (axis == 1)
                distance += extent * 0.5f;
            intersects = 1;
            result.value = axis == 1 ? distance : radius + distance;
        }
    }
    // Retail uses the signed IEEE-754 encoding to reject negative or sub-epsilon distances.
    if (result.bits < 0x3a83126f)
        result.value = -1.0f;
    *distanceOut = result.value;
    return intersects;
}
}
