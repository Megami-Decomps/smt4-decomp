/* NON_MATCHING: readable rebuild of the mesh-to-collision conversion; retail loads the three vertices with 64-bit pair loads and keeps the 1/3 constant and the centroid sums in VFP registers across the edge-normal calls, which armcc here schedules differently. */
#include "gfx/CollisionPlaneView.h"

/* A mesh of vertex positions, normals and triangles. */
struct MapMeshTriangle {
    /* 0x00 */ s32 vertex[3];
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ s32 normal;
    /* 0x14 */ s32 unk14;
};
struct MapMeshVector {
    f32 x, y, z, w;
};
struct MapMesh {
    /* 0x00 */ MapMeshVector *vertices;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ MapMeshVector *normals;
    /* 0x0C */ u8 unk0C[0x14];
    /* 0x20 */ MapMeshTriangle *triangles;
    /* 0x24 */ u32 triangleCount;
};

extern "C" {

void FUN_00226e90(s32 axis, s32 kind, f32 *edgeNormal, f32 *edgeDistance);
void FUN_00237438(s32 axis, s32 vertex, f32 *edgeNormal, f32 *edgeDistance);

/* Appends every triangle of the mesh to the map's second collision list as a tagged plane: the
 * plane equation, the three vertices and their centroid, the dominant axis, and the edge planes. */
void FUN_0025f358(u32 tag)
{
    MapMesh *mesh = *(MapMesh **)((u8 *)&g_mapCollision + 0x30);
    for (u32 i = 0; i < mesh->triangleCount; i++) {
        MapMeshTriangle *triangle = &mesh->triangles[i];
        CollisionQuad *quad = &g_mapCollision.second[g_mapCollision.segmentCounts[0]];
        MapMeshVector *a = &mesh->vertices[triangle->vertex[0]];
        MapMeshVector *b = &mesh->vertices[triangle->vertex[1]];
        MapMeshVector *c = &mesh->vertices[triangle->vertex[2]];
        MapMeshVector *n = &mesh->normals[triangle->normal];
        quad->normal.x = n->x;
        quad->normal.y = n->y;
        quad->normal.z = n->z;
        quad->distance = n->x * a->x + n->y * a->y + n->z * a->z;
        const f32 third = 1.0f / 3.0f;
        quad->center.x = (a->x + b->x + c->x) * third;
        quad->center.y = (a->y + b->y + c->y) * third;
        quad->center.z = (a->z + b->z + c->z) * third;
        quad->vertices[0].x = a->x;
        quad->vertices[0].y = a->y;
        quad->vertices[0].z = a->z;
        quad->vertices[2].x = c->x;
        quad->vertices[2].y = c->y;
        quad->vertices[2].z = c->z;
        quad->vertices[1].x = b->x;
        quad->vertices[1].y = b->y;
        quad->vertices[1].z = b->z;
        quad->vertexCount = 3;
        quad->unk00 = tag;
        quad->material = 0;
        quad->active = 1;
        quad->queue = 0;
        f32 nx = quad->normal.x < 0.0f ? -quad->normal.x : quad->normal.x;
        f32 nz = quad->normal.z < 0.0f ? -quad->normal.z : quad->normal.z;
        quad->enabled = nz <= nx ? 0 : 2; /* the axis the plane is projected along */
        FUN_00237438(quad->enabled, 0, &quad->edgeNormals[0].x, &quad->edgeDistances[0]);
        FUN_00237438(quad->enabled, 1, &quad->edgeNormals[1].x, &quad->edgeDistances[1]);
        FUN_00237438(quad->enabled, 2, &quad->edgeNormals[2].x, &quad->edgeDistances[2]);
        FUN_00226e90(quad->enabled, quad->vertexCount, &quad->edgeNormals[3].x, &quad->edgeDistances[3]);
        g_mapCollision.segmentCounts[0]++;
    }
}

} /* extern "C" */
