/* NON_MATCHING: VFP scheduling differs: retail loads each vertex component into its own s-register and passes the argument vectors from those registers; the build copies vertices as register pairs and keeps fewer constants live. */
#include "shard/W6_W6Match6_CollisionQuad.h"

struct CollisionModelVertex {
    CollisionVector v;
    f32 w;
};

struct CollisionModelTriangle {
    s32 vertex[3];
    s32 unk0C;
    s32 normal;
    s32 unk14;
};

/* Mesh the map collision is built from. */
struct CollisionModel {
    CollisionModelVertex *vertices; // 0x00
    u32 unk04;
    CollisionModelVertex *normals;  // 0x08
    u32 unk0C;
    CollisionModelTriangle *triangles; // 0x10
    u32 triangleCount;              // 0x14
};

/* g_mapCollision as the triangle importer sees it: the queue state plus the mesh pointer after it. */
struct MapCollisionMesh : CollisionQueueState {
    u8 unk28[8];
    CollisionModel *model; // 0x30
};

extern "C" {
void FUN_0026e8a4(s32 axis, s32 count, f32 *minimum, f32 *maximum,
                  CollisionVector first, CollisionVector second, CollisionVector third, CollisionVector fourth);
void FUN_0026ea5c(s32, s32, CollisionVector *, f32 *, CollisionVector, CollisionVector, CollisionVector);

/* Turn every triangle of the loaded collision mesh into a collision quad record owned by `owner`. */
void FUN_0025f954(u32 owner)
{
    MapCollisionMesh &collision = (MapCollisionMesh &)g_mapCollision;
    for (u32 i = 0; i < collision.model->triangleCount; i++) {
        const CollisionModelTriangle *triangle = &collision.model->triangles[i];
        CollisionQuad *quad = &collision.triangles[collision.geometry.triangleCount];
        const CollisionModelVertex *p0 = &collision.model->vertices[triangle->vertex[0]];
        const CollisionModelVertex *p1 = &collision.model->vertices[triangle->vertex[1]];
        const CollisionModelVertex *p2 = &collision.model->vertices[triangle->vertex[2]];
        const CollisionModelVertex *n = &collision.model->normals[triangle->normal];
        CollisionVector a = {p0->v.x, p0->v.y, p0->v.z};
        CollisionVector b = {p1->v.x, p1->v.y, p1->v.z};
        CollisionVector c = {p2->v.x, p2->v.y, p2->v.z};
        quad->vertices[0].x = a.x;
        quad->vertices[0].y = a.y;
        quad->vertices[0].z = a.z;
        quad->vertices[1].x = b.x;
        quad->vertices[1].y = b.y;
        quad->vertices[1].z = b.z;
        quad->vertices[2].x = c.x;
        quad->vertices[2].y = c.y;
        quad->vertices[2].z = c.z;
        quad->normal = n->v;
        quad->distance = quad->normal.x * a.x + quad->normal.y * a.y + quad->normal.z * a.z;
        quad->center.x = (a.x + b.x + c.x) * (1.0f / 3.0f);
        quad->center.y = (a.y + b.y + c.y) * (1.0f / 3.0f);
        quad->center.z = (a.z + b.z + c.z) * (1.0f / 3.0f);
        quad->vertexCount = 3;
        quad->enabled = 1;
        quad->unk00 = owner;
        quad->material = 0;
        quad->active = 1;
        quad->queue = 0;
        quad->tag = 0;
        CollisionVector reference = {quad->center.x, 0.0f, quad->center.z};
        FUN_0026ea5c(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], reference, a, b);
        FUN_0026ea5c(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], reference, b, c);
        FUN_0026ea5c(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], reference, c, a);
        CollisionVector unused;
        FUN_0026e8a4(quad->enabled, quad->vertexCount, (f32 *)&quad->unk98[0], (f32 *)&quad->unk98[8], a, b, c, unused);
        collision.geometry.triangleCount++;
    }
}
}
