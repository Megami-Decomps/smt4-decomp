/* NON_MATCHING: retail places the first queue's slot computation out of line and saves the vector arguments in
 * other VFP registers; the centre sums follow retail. */
#include "map/CollisionVectorMath.h"

extern "C" {
extern CollisionQuad g_collisionPlaneTable[];
void FUN_0026e80c(s32, CollisionVector *, CollisionVector, CollisionVector, CollisionVector, CollisionVector);
void statusCameraBuildAxisPlane(s32, s32, CollisionVector *, f32 *, CollisionVector, CollisionVector, CollisionVector);

void mapCollisionQueueQuad(s32 queue, u16 tag, u16 material, CollisionVector a, CollisionVector b,
                  CollisionVector c, CollisionVector d, CollisionVector normal)
{
    CollisionQuad *quad;
    if (queue == 0) {
        quad = &g_mapCollision.first[g_mapCollision.firstCount++];
    } else {
        quad = &g_collisionPlaneTable[g_mapCollision.secondCount++];
    }
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
    CollisionVector center;
    collisionVectorAdd(&center, &a, &b);
    collisionVectorAdd(&center, &center, &c);
    collisionVectorAdd(&center, &center, &d);
    collisionVectorScale(&center, &center, 0.25f);
    quad->center = center;
    CollisionVector reference;
    FUN_0026e80c(1, &reference, a, b, c, d);
    statusCameraBuildAxisPlane(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], reference, a, b);
    statusCameraBuildAxisPlane(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], reference, b, c);
    statusCameraBuildAxisPlane(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], reference, c, d);
    statusCameraBuildAxisPlane(quad->enabled, 2, &quad->edgeNormals[3], &quad->edgeDistances[3], reference, d, a);
}
}
