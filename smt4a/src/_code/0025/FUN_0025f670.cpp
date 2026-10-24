/* NON_MATCHING: the per-vertex float loads and register allocation differ and the face-normal test is a float compare where retail compares the raw bits (194 vs 185 rows). */
#include "common.h"

extern "C" {

typedef struct CollisionVec3 {
    f32 x, y, z;
} CollisionVec3;

/* One collision quad (0xA8 bytes) built from a mesh face. */
typedef struct CollisionQuad {
    /* 0x00 */ u32 owner;
    /* 0x04 */ s8 shape;                /* 0: faces x, 2: faces z */
    /* 0x05 */ s8 kind;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0a[2];
    /* 0x0C */ CollisionVec3 normal;
    /* 0x18 */ f32 planeD;
    /* 0x1C */ CollisionVec3 edgeDirection[4];
    /* 0x4C */ f32 edgeLength[4];
    /* 0x5C */ CollisionVec3 corner[4];
    /* 0x8C */ CollisionVec3 center;
    /* 0x98 */ f32 bounds[2];
    /* 0xA0 */ f32 extent;
    /* 0xA4 */ u8 unkA4[4];
} CollisionQuad;

/* A mesh face: four vertex indices, the normal index and one more word. */
typedef struct MeshFace {
    s32 vertex[4];
    s32 normal;
    s32 unk14;
} MeshFace;

typedef struct CollisionMesh {
    /* 0x00 */ CollisionVec3 *vertices;     /* stride 0x10 */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ CollisionVec3 *normals;      /* stride 0x10 */
    /* 0x0C */ u8 unk0c[0x1C];
    /* 0x28 */ MeshFace *faces;
    /* 0x2C */ u32 faceCount;
} CollisionMesh;

/* The collision builder's global state. */
typedef struct CollisionBuild {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 quadCount;
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ CollisionQuad *quads;
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ CollisionMesh *mesh;
} CollisionBuild;

extern CollisionBuild g_mapCollision;

void FUN_001f4d08(s32 shape, u8 buffer[68], CollisionVec3 a, CollisionVec3 b, CollisionVec3 c, CollisionVec3 d);
void FUN_00237438(s32 shape, s32 index, CollisionVec3 *direction, f32 *length, CollisionVec3 buffer, CollisionVec3 a,
                  CollisionVec3 b);
void FUN_00226e90(s32 shape, s32 kind, f32 *bounds, f32 *extent, CollisionVec3 a, CollisionVec3 b, CollisionVec3 c,
                  CollisionVec3 d);

/* Builds a collision quad for every face of the loaded mesh: its corners, normal, plane
 * distance, centre, the dominant axis and the per-edge data, owned by `owner`. Faces whose
 * normal is nearly vertical are skipped. */
void FUN_0025f670(u32 owner)
{
    for (u32 i = 0; i < g_mapCollision.mesh->faceCount; i++) {
        CollisionQuad *quad = &g_mapCollision.quads[g_mapCollision.quadCount];
        MeshFace *face = &g_mapCollision.mesh->faces[i];
        CollisionVec3 v0 = g_mapCollision.mesh->vertices[face->vertex[0]];
        CollisionVec3 v1 = g_mapCollision.mesh->vertices[face->vertex[1]];
        CollisionVec3 v2 = g_mapCollision.mesh->vertices[face->vertex[2]];
        CollisionVec3 v3 = g_mapCollision.mesh->vertices[face->vertex[3]];
        CollisionVec3 normal = g_mapCollision.mesh->normals[face->normal];

        quad->normal = normal;
        quad->planeD = normal.x * v0.x + normal.y * v0.y + normal.z * v0.z;
        quad->center.x = (v0.x + v1.x + v2.x + v3.x) * 0.25f;
        quad->center.y = (v0.y + v1.y + v2.y + v3.y) * 0.25f;
        quad->center.z = (v0.z + v1.z + v2.z + v3.z) * 0.25f;
        quad->corner[0] = v0;
        quad->corner[3] = v3;
        quad->corner[2] = v2;
        quad->corner[1] = v1;
        quad->kind = 4;
        quad->owner = owner;
        quad->unk06 = 0;
        quad->active = 1;
        quad->unk09 = 0;
        if (__fabsf(quad->normal.y) < 0.9f) {
            u8 buffer[68];

            if (__fabsf(quad->normal.x) >= __fabsf(quad->normal.z)) {
                quad->shape = 0;
            } else {
                quad->shape = 2;
            }
            FUN_001f4d08(quad->shape, buffer, v0, v1, v2, v3);
            FUN_00237438(quad->shape, 0, &quad->edgeDirection[0], &quad->edgeLength[0], *(CollisionVec3 *)buffer, v0, v1);
            FUN_00237438(quad->shape, 1, &quad->edgeDirection[1], &quad->edgeLength[1], *(CollisionVec3 *)buffer, v1, v2);
            FUN_00237438(quad->shape, 2, &quad->edgeDirection[2], &quad->edgeLength[2], *(CollisionVec3 *)buffer, v2, v3);
            FUN_00237438(quad->shape, 2, &quad->edgeDirection[3], &quad->edgeLength[3], *(CollisionVec3 *)buffer, v3, v0);
            FUN_00226e90(quad->shape, quad->kind, quad->bounds, &quad->extent, v0, v1, v2, v3);
            g_mapCollision.quadCount++;
        }
    }
}

}
