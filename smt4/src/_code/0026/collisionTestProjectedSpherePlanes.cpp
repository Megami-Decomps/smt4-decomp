/* NON_MATCHING: 142 lines: retail predicates the axis 1/2 projections, places the axis-0 block out of line and keeps the plane index in r4 with one address register (push {r4, r5}); VFP registers differ throughout. */
#include "shard/W6_W6Match7_CollisionPlanes.h"

extern "C" {
// Project the sphere center onto an axis plane and test its collision half-spaces.
u32 collisionTestProjectedSpherePlanes(f32 *distanceOut, s32 axis, s32 planeCount, const CollisionPlanes *planes,
                 f32 x, f32 y, f32 z, f32 radius)
{
    CollisionDistance result;
    result.value = radius;
    f32 extent = 120.0f;
    u32 intersects = 0;
    f32 px, py, pz; /* the centre projected onto the axis plane */
    f32 u, v;       /* its coordinates within the plane */
    if (axis == 0) {
        px = 0.0f;
        py = y;
        pz = z;
        u = y;
        v = z;
    } else {
        px = x;
        u = x;
        if (axis == 1) {
            extent = 50.0f;
            py = 0.0f;
            pz = z;
            v = z;
        } else {
            py = y;
            pz = 0.0f;
            v = y;
        }
    }
    for (s32 i = 0; i < planeCount; ++i) {
        f32 distance = px * planes->normals[i].x + py * planes->normals[i].y +
                       pz * planes->normals[i].z - planes->distances[i];
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
