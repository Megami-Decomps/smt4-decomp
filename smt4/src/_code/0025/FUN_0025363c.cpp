/* NON_MATCHING: readable rebuild of the sphere-versus-collision-planes push-out; the scalar/VFP register assignment and the order of the plane test sequence differ from retail. */
#include "gfx/CollisionPlaneView.h"
#include <math.h>

extern "C" {
void collisionTestProjectedSpherePlanes(f32 *distanceOut, s32 kind, s32 sub, const CollisionPlaneView *plane,
                                        f32 x, f32 y, f32 z, f32 radius);

/* Pushes a sphere at `position` (lifted by 15 for its radius) out of the map's collision planes,
 * four passes over the plane lists; writes the corrected position to `out` and returns whether a
 * relevant plane was hit (floor-like planes when `wantFloor`, others otherwise). */
u32 FUN_0025363c(const CollisionVector *position, CollisionVector *out, s32 wantFloor)
{
    const f32 footOffset = 25.0f;
    u32 hit = 0;
    s32 lastFloor = -1;
    f32 x = position->x;
    f32 y = position->y + 15.0f;
    f32 z = position->z;
    for (s32 pass = 0; pass < 4; pass++) {
        CollisionPlaneView *planes;
        s32 count;
        f32 radius = 25.0f;
        if (pass == 0) {
            planes = (CollisionPlaneView *)g_mapCollision.triangles;
            count = g_mapCollision.geometry.triangleCount;
        } else if (pass == 1) {
            planes = (CollisionPlaneView *)g_mapCollision.quads;
            count = g_mapCollision.quadCount;
        } else {
            radius = 60.0f;
            if (pass == 2) {
                planes = (CollisionPlaneView *)g_mapCollision.second;
                count = g_mapCollision.segmentCounts[0];
            } else {
                planes = (CollisionPlaneView *)g_mapCollision.unk24;
                count = g_mapCollision.segmentCounts[1];
            }
        }
        for (s32 i = 0; i < count; i++, planes++) {
            if (!planes->active)
                continue;
            f32 signedDistance = x * planes->normal.x + y * planes->normal.y + z * planes->normal.z - planes->distance;
            f32 distance = fabsf(signedDistance);
            if (radius <= distance)
                continue;
            f32 push;
            collisionTestProjectedSpherePlanes(&push, planes->kind, planes->sub, planes, x, y, z, radius);
            if (push < 0.0f)
                continue;
            f32 px = x - planes->normal.x * signedDistance;
            f32 py = y - planes->normal.y * signedDistance;
            f32 pz = z - planes->normal.z * signedDistance;
            if (planes->kind == 1) {
                if (lastFloor > -1 && push < distance)
                    push = distance;
                x = px + planes->normal.x * push;
                y = py + planes->normal.y * push;
                z = pz + planes->normal.z * push;
                if (push == radius)
                    lastFloor = i;
                if (wantFloor)
                    hit = 1;
            } else {
                if (signedDistance < 0.0f)
                    continue;
                if (distance > push)
                    push = distance;
                x = px + planes->normal.x * push;
                y = py + planes->normal.y * push;
                z = pz + planes->normal.z * push;
                if (!wantFloor)
                    hit = 1;
            }
        }
    }
    out->x = x;
    out->z = z;
    out->y = y - footOffset;
    return hit;
}

} /* extern "C" */
