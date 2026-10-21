/* NON_MATCHING: floating arithmetic reassociation, queue branch placement and saved vector allocation differ; -O2 candidate. */
#include "shard/W6_W6Match6_CollisionQuad.h"

extern "C" {
extern CollisionQuad DAT_005e2714[];
void FUN_001f4d08(s32, CollisionVector *, CollisionVector, CollisionVector, CollisionVector, CollisionVector);
void FUN_00237438(s32, s32, CollisionVector *, f32 *, CollisionVector, CollisionVector, CollisionVector);

void mapCollisionQueueQuad(s32 queue, u16 tag, u16 material, CollisionVector a, CollisionVector b,
                  CollisionVector c, CollisionVector d, CollisionVector normal)
{
    CollisionQuad *quad;
    if (queue)
        quad = &DAT_005e2714[g_mapCollision.secondCount++];
    else
        quad = &g_mapCollision.first[g_mapCollision.firstCount++];
    quad->normal = normal;
    quad->distance = normal.x * a.x + normal.y * a.y + normal.z * a.z;
    quad->vertices[0] = a;
    quad->vertices[1] = b;
    quad->vertices[2] = c;
    quad->vertices[3] = d;
    quad->material = material;
    quad->queue = queue;
    quad->tag = tag;
    quad->vertexCount = 4;
    quad->enabled = 1;
    quad->active = 1;
    quad->center.x = (a.x + b.x + c.x + d.x) * 0.25f;
    quad->center.y = (a.y + b.y + c.y + d.y) * 0.25f;
    quad->center.z = (a.z + b.z + c.z + d.z) * 0.25f;
    CollisionVector reference;
    FUN_001f4d08(1, &reference, a, b, c, d);
    FUN_00237438(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], reference, a, b);
    FUN_00237438(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], reference, b, c);
    FUN_00237438(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], reference, c, d);
    FUN_00237438(quad->enabled, 2, &quad->edgeNormals[3], &quad->edgeDistances[3], reference, d, a);
}
}
