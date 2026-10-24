/* NON_MATCHING: VFP temporary allocation differs (argument copies s16-s27 permuted, center sums scheduled differently, |x| vs |z| compare operand order) */
#include "shard/W6_W6Match6_CollisionQuad.h"
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
void FUN_00237438(s32, s32, CollisionVector *, f32 *, CollisionVector, CollisionVector, CollisionVector);

/* Appends a four-corner quad to the third collision list: plane, corners, center, and (for a mostly-vertical normal) its edge planes. */
void FUN_002c0b98(u16 tag, CollisionVector a, CollisionVector b, CollisionVector c, CollisionVector d,
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
    center.x = (a.x + b.x + c.x + d.x) * 0.25f;
    center.y = (a.y + b.y + c.y + d.y) * 0.25f;
    center.z = (a.z + b.z + c.z + d.z) * 0.25f;
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
        FUN_00237438(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], reference, a, b);
        FUN_00237438(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], reference, b, c);
        FUN_00237438(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], reference, c, d);
        FUN_00237438(quad->enabled, 2, &quad->edgeNormals[3], &quad->edgeDistances[3], reference, d, a);
        g_mapCollision.segmentCounts[1]++;
    }
}

} /* extern "C" */
