/* NON_MATCHING: rewritten from the raw draft (mapSweepCollisionPlanesFar is the same sweep over the last two lists). */
#include "gfx/CollisionPlaneView.h"
#include "game/GameState.h"
#include <math.h>

extern "C" {
/* The planes of each collision list the last sweep touched, one byte per plane (FUN_002005ec reads them). */
extern u8 g_mapCollisionTouchedTriangles[];
extern u8 g_mapCollisionTouchedQuads[];
extern u8 g_mapCollisionTouchedSegmentsA[];
extern u8 g_mapCollisionTouchedSegmentsB[];

void collisionTestProjectedSpherePlanes(f32 *distanceOut, s32 kind, s32 sub, const CollisionPlaneView *plane,
                                        f32 x, f32 y, f32 z, f32 radius);

/* Moves a sphere from `previous` to `position` (lifted by 15) and pushes it out of the map's four collision plane
 * lists (radius 25 for the first two, 60 for the others), marking each plane it touches and recording the last
 * kind-1 plane hit in the game state; writes the corrected position back and the old one to `previous`. Returns
 * whether a kind-1 plane was hit (1 when the sphere did not move). */
u32 mapProjectPositionToGround(CollisionVector *position, CollisionVector *previous)
{
    s32 lastWall = -1;
    u32 hit = 0;
    CollisionVector from = *previous;
    f32 x = position->x;
    f32 y = position->y;
    f32 z = position->z;
    CollisionVector start = *position;

    g_gameState.lastWallPass = -1;
    g_gameState.lastWallPlane = -1;
    for (s32 i = 0; i < g_mapCollision.geometry.triangleCount; i++) {
        g_mapCollisionTouchedTriangles[i] = 0;
    }
    for (s32 i = 0; i < g_mapCollision.quadCount; i++) {
        g_mapCollisionTouchedQuads[i] = 0;
    }
    for (s32 i = 0; i < g_mapCollision.segmentCounts[0]; i++) {
        g_mapCollisionTouchedSegmentsA[i] = 0;
    }
    for (s32 i = 0; i < g_mapCollision.segmentCounts[1]; i++) {
        g_mapCollisionTouchedSegmentsB[i] = 0;
    }
    f32 dx = x - from.x;
    f32 dy = y - from.y;
    f32 dz = z - from.z;
    if (sqrtf(dx * dx + dy * dy + dz * dz) < 0.01f) {
        return 1;
    }

    y += 15.0f;
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
            /* The sphere centre projected onto the plane (retail multiplies and subtracts apart). */
            f32 offsetX = planes->normal.x * signedDistance;
            f32 offsetY = planes->normal.y * signedDistance;
            f32 offsetZ = planes->normal.z * signedDistance;
            f32 px = x - offsetX;
            f32 py = y - offsetY;
            f32 pz = z - offsetZ;
            if (planes->kind == 1) {
                g_gameState.lastWallPass = pass;
                g_gameState.lastWallPlane = i;
                if (pass == 0) {
                    g_mapCollisionTouchedTriangles[i] = 1;
                } else if (pass == 1) {
                    g_mapCollisionTouchedQuads[i] = 1;
                }
                if (lastWall > -1 && push < distance)
                    push = distance;
                f32 pushX = planes->normal.x * push;
                f32 pushY = planes->normal.y * push;
                f32 pushZ = planes->normal.z * push;
                x = px + pushX;
                y = py + pushY;
                z = pz + pushZ;
                hit = 1;
                if (push == radius)
                    lastWall = i;
            } else {
                if (pass == 2) {
                    g_mapCollisionTouchedSegmentsA[i] = 1;
                } else if (pass == 3) {
                    g_mapCollisionTouchedSegmentsB[i] = 1;
                }
                if (signedDistance < 0.0f)
                    continue;
                if (distance > push)
                    push = distance;
                f32 pushX = planes->normal.x * push;
                f32 pushY = planes->normal.y * push;
                f32 pushZ = planes->normal.z * push;
                x = px + pushX;
                y = py + pushY;
                z = pz + pushZ;
            }
        }
    }
    position->x = x;
    position->y = y - 25.0f;
    position->z = z;
    *previous = start;
    return hit;
}

} /* extern "C" */
