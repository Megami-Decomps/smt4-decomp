/* NON_MATCHING: readable rebuild of the sphere-versus-collision-planes push-out (the passes are a switch, as retail lays out cases 0 and 1 out of line); y and z swap VFP registers, the plane tests branch on other conditions (bls/bgt against retail ble/bcc), and retail homes r0-r2 and reloads the normal for the projection. */
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
        f32 radius;
        switch (pass) {
        case 0:
            radius = 25.0f;
            planes = (CollisionPlaneView *)g_mapCollision.triangles;
            count = g_mapCollision.geometry.triangleCount;
            break;
        case 1:
            radius = 25.0f;
            planes = (CollisionPlaneView *)g_mapCollision.quads;
            count = g_mapCollision.quadCount;
            break;
        case 2:
            radius = 60.0f;
            planes = (CollisionPlaneView *)g_mapCollision.second;
            count = g_mapCollision.segmentCounts[0];
            break;
        default:
            radius = 60.0f;
            planes = (CollisionPlaneView *)g_mapCollision.unk24;
            count = g_mapCollision.segmentCounts[1];
            break;
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
