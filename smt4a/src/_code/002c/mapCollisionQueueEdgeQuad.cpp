/* NON_MATCHING: the saved copies of the four corner arguments get other VFP registers (retail s16-s27 permuted);
 * the stores, the centre sums and the edge-plane calls follow retail. */
#include "map/CollisionVectorMath.h"
#include <math.h>

static __inline s32 floatBits(f32 value)
{
    union {
        f32 f;
        s32 i;
    } bits;

    bits.f = value;
    return bits.i;
}

extern "C" {
void FUN_001f4d08(s32, CollisionVector *, CollisionVector, CollisionVector, CollisionVector, CollisionVector);
void statusCameraBuildAxisPlane(s32, s32, CollisionVector *, f32 *, CollisionVector, CollisionVector, CollisionVector);

/* Appends a four-corner quad to the third collision list: plane, corners, center, and (for a mostly-vertical normal) its edge planes. */
void mapCollisionQueueEdgeQuad(u16 tag, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d,
                  CollisionVector normal)
{
    CollisionQuad *quad = &g_mapCollision.unk24[g_mapCollision.segmentCounts[1]];
    quad->normal = normal;
    quad->distance = quad->normal.x * a.x + quad->normal.y * a.y + quad->normal.z * a.z;
    quad->vertices[0] = a;
    quad->vertices[1] = b;
    quad->vertices[2] = c;
    quad->vertices[3] = d;
    CollisionVector center;
    collisionVectorAdd(&center, &a, &b);
    collisionVectorAdd(&center, &center, &c);
    collisionVectorAdd(&center, &center, &d);
    collisionVectorScale(&center, &center, 0.25f);
    quad->center = center;
    quad->vertexCount = 4;
    quad->material = tag;
    quad->active = 1;
    quad->queue = 0;
    if (floatBits(fabsf(normal.y)) < 0x3F666666) {
        if (fabsf(quad->normal.x) >= fabsf(normal.z)) {
            quad->enabled = 0;
        } else {
            quad->enabled = 2;
        }
        CollisionVector reference;
        FUN_001f4d08(quad->enabled, &reference, a, b, c, d);
        statusCameraBuildAxisPlane(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], reference, a, b);
        statusCameraBuildAxisPlane(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], reference, b, c);
        statusCameraBuildAxisPlane(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], reference, c, d);
        statusCameraBuildAxisPlane(quad->enabled, 2, &quad->edgeNormals[3], &quad->edgeDistances[3], reference, d, a);
        g_mapCollision.segmentCounts[1]++;
    }
}

} /* extern "C" */
