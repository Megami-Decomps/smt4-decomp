/* NON_MATCHING: retail copies the normal and keeps each vertex as one three-register VFP block (vldmia/vstmia of s16-s24) across the edge calls and reloads quad->normal for the axis test; armcc caches the values and splits the vertex loads here. */
#include "shard/W6_W6Match6_CollisionQuad.h"

struct CollisionMeshVertex {
    CollisionVector v;
    f32 w;
};

struct CollisionMeshTriangle {
    s32 vertex[3];
    s32 unk0C;
    s32 normal;
    s32 unk14;
};

/* The triangle mesh the second collision list is built from. */
struct CollisionMeshModel {
    CollisionMeshVertex *vertices; // 0x00
    u32 unk04;
    CollisionMeshVertex *normals;  // 0x08
    u8 unk0C[0x14];
    CollisionMeshTriangle *triangles; // 0x20
    u32 triangleCount;             // 0x24
};

/* g_mapCollision as the importer sees it: the queue state plus the mesh pointer after it. */
struct MapCollisionMeshView : CollisionQueueState {
    u8 unk28[8];
    CollisionMeshModel *model; // 0x30
};
typedef char MapCollisionMeshViewCheck[offsetof(MapCollisionMeshView, model) == 0x30 ? 1 : -1];

extern "C" {
void FUN_0026e8a4(s32 axis, s32 count, f32 *minimum, f32 *maximum,
                  f32 x0, f32 y0, f32 z0, f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2, f32 x3, f32 y3, f32 z3);
void FUN_0026ea5c(s32 axis, s32 index, CollisionVector *direction, f32 *length,
                  f32 cx, f32 cy, f32 cz, f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz);

/* The triangle's centre with the coordinate of the projection axis dropped. */
static __inline CollisionVector collisionTriangleProjectedCenter(s32 axis, CollisionVector a, CollisionVector b,
                                                                 CollisionVector c)
{
    CollisionVector result;
    if (axis == 0) {
        result.x = 0.0f;
        result.y = (a.y + b.y + c.y) * (1.0f / 3.0f);
        result.z = (a.z + b.z + c.z) * (1.0f / 3.0f);
    } else if (axis == 1) {
        result.x = (a.x + b.x + c.x) * (1.0f / 3.0f);
        result.y = 0.0f;
        result.z = (a.z + b.z + c.z) * (1.0f / 3.0f);
    } else if (axis == 2) {
        result.x = (a.x + b.x + c.x) * (1.0f / 3.0f);
        result.y = (a.y + b.y + c.y) * (1.0f / 3.0f);
        result.z = 0.0f;
    }
    return result;
}

/* Appends every triangle of the mesh to the map's second collision list as a tagged plane: the
 * plane equation, the three vertices and their centroid, the dominant axis, and the edge planes. */
void FUN_001c1ee8(u32 tag)
{
    MapCollisionMeshView &collision = (MapCollisionMeshView &)g_mapCollision;
    for (u32 i = 0; i < collision.model->triangleCount; i++) {
        const CollisionMeshTriangle *triangle = &collision.model->triangles[i];
        CollisionQuad *quad = &collision.second[collision.segmentCounts[0]];
        CollisionVector a = collision.model->vertices[triangle->vertex[0]].v;
        CollisionVector b = collision.model->vertices[triangle->vertex[1]].v;
        CollisionVector c = collision.model->vertices[triangle->vertex[2]].v;
        quad->normal = collision.model->normals[triangle->normal].v;
        quad->distance = quad->normal.x * a.x + quad->normal.y * a.y + quad->normal.z * a.z;
        quad->center.x = (a.x + b.x + c.x) * (1.0f / 3.0f);
        quad->center.y = (a.y + b.y + c.y) * (1.0f / 3.0f);
        quad->center.z = (a.z + b.z + c.z) * (1.0f / 3.0f);
        quad->vertices[0] = a;
        quad->vertices[2] = c;
        quad->vertices[1] = b;
        quad->vertexCount = 3;
        quad->unk00 = tag;
        quad->material = 0;
        quad->active = 1;
        quad->queue = 0;
        f32 nx = __fabsf(quad->normal.x);
        f32 nz = __fabsf(quad->normal.z);
        quad->enabled = nx >= nz ? 0 : 2;
        CollisionVector center = collisionTriangleProjectedCenter(quad->enabled, a, b, c);
        FUN_0026ea5c(quad->enabled, 0, &quad->edgeNormals[0], &quad->edgeDistances[0], center.x, center.y, center.z, a.x, a.y, a.z, b.x, b.y, b.z);
        FUN_0026ea5c(quad->enabled, 1, &quad->edgeNormals[1], &quad->edgeDistances[1], center.x, center.y, center.z, b.x, b.y, b.z, c.x, c.y, c.z);
        FUN_0026ea5c(quad->enabled, 2, &quad->edgeNormals[2], &quad->edgeDistances[2], center.x, center.y, center.z, c.x, c.y, c.z, a.x, a.y, a.z);
        CollisionVector unused;
        FUN_0026e8a4(quad->enabled, quad->vertexCount, (f32 *)&quad->unk98[0], (f32 *)&quad->unk98[8], a.x, a.y, a.z, b.x, b.y, b.z, c.x, c.y, c.z, unused.x, unused.y, unused.z);
        collision.segmentCounts[0]++;
    }
}

} /* extern "C" */
