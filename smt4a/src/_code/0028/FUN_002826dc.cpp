/* NON_MATCHING: VFP register allocation and the branch layout of the plane loop differ from retail (retail keeps the sphere position in s17-s19 and tests the projected distance before reloading the plane normal). */
#include "common.h"
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {

u32 collisionTestProjectedSpherePlanes(f32 *distanceOut, s32 axis, s32 planeCount, const CollisionQuad *plane,
                                       f32 x, f32 y, f32 z, f32 radius);

/* Pushes a sphere out of the map's collision planes in four passes (triangle, quad and two
 * segment sets). `position` is the in/out position (y is the ground level), `strict` selects which
 * contact kind marks the result, and `tall` selects the larger radius for the segment passes.
 * Returns 1 when a marking contact was found. */
u32 FUN_002826dc(const f32 *position, f32 *resolved, s32 strict, s32 tall)
{
    s32 closest = -1;
    u32 result = 0;
    f32 x = position[0];
    f32 y = position[1] + 15.0f;
    f32 z = position[2];

    for (s32 pass = 0; pass < 4; pass++) {
        CollisionQuad *planes;
        s32 count;
        f32 radius;

        if (pass == 0) {
            planes = g_mapCollision.triangles;
            count = g_mapCollision.geometry.triangleCount;
            radius = 25.0f;
        } else if (pass == 1) {
            planes = g_mapCollision.quads;
            count = g_mapCollision.quadCount;
            radius = 25.0f;
        } else if (pass != 2) {
            planes = g_mapCollision.unk24;
            count = g_mapCollision.segmentCounts[1];
            radius = tall != 0 ? 60.0f : 50.0f;
        } else {
            planes = g_mapCollision.second;
            count = g_mapCollision.segmentCounts[0];
            radius = tall != 0 ? 60.0f : 50.0f;
        }
        for (s32 i = 0; i < count; i++, planes++) {
            if (planes->active == 0) {
                continue;
            }
            f32 distance = x * planes->normal.x + y * planes->normal.y + z * planes->normal.z - planes->distance;
            f32 magnitude = distance < 0.0f ? -distance : distance;

            if (!(magnitude < radius)) {
                continue;
            }
            f32 reach;

            collisionTestProjectedSpherePlanes(&reach, planes->enabled, planes->vertexCount, planes, x, y, z, radius);
            if (reach < 0.0f) {
                continue;
            }
            f32 px = x - planes->normal.x * distance;
            f32 py = y - planes->normal.y * distance;
            f32 pz = z - planes->normal.z * distance;

            if (planes->enabled == 1) {
                if (closest > -1 && reach < magnitude) {
                    reach = magnitude;
                }
                x = px + planes->normal.x * reach;
                y = py + planes->normal.y * reach;
                z = pz + planes->normal.z * reach;
                if (reach == radius) {
                    closest = i;
                }
                if (strict != 0) {
                    result = 1;
                }
            } else {
                if (distance < 0.0f) {
                    continue;
                }
                if (reach < magnitude) {
                    reach = magnitude;
                }
                x = px + planes->normal.x * reach;
                y = py + planes->normal.y * reach;
                z = pz + planes->normal.z * reach;
                if (strict == 0) {
                    result = 1;
                }
            }
        }
    }
    resolved[0] = x;
    resolved[2] = z;
    resolved[1] = y - 25.0f;
    return result;
}

}
