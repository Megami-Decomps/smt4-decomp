/* NON_MATCHING: float scheduling and register allocation differ - retail keeps the four vertices in s16-s27 loaded with vldmia and passes them straight to the edge builders, while armcc here interleaves the loads with the plane/centre computation; the stores and calls are the same. */
#include "shard/S1Mover.h"

namespace {
/* A vertex or normal of the collision mesh (16 bytes, the fourth word is padding). */
struct MeshVec4 {
    Vec3f v;
    f32 w;
};

/* A face of the collision mesh as stored in the file: four vertex indices and the normal index. */
struct MeshFace {
    s32 vertex[4];
    s32 normal;
    s32 unk14;
};

struct CollisionMesh {
    /* 0x00 */ MeshVec4 *vertices;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ MeshVec4 *normals;
    /* 0x0c */ u8 unk0c[0xc];
    /* 0x18 */ MeshFace *faces;
    /* 0x1c */ u32 faceCount;
};

/* A built collision face (0xA8 bytes). */
struct CollisionFace {
    /* 0x00 */ u32 owner;
    /* 0x04 */ s8 kind;
    /* 0x05 */ u8 vertexCount;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u8 enabled;
    /* 0x09 */ u8 unk09;
    /* 0x0a */ u16 unk0a;
    /* 0x0c */ Vec3f normal;
    /* 0x18 */ f32 distance;          /* dot(normal, vertex[0]) */
    /* 0x1c */ f32 edgeA[3];
    /* 0x28 */ f32 edgeB[3];
    /* 0x34 */ f32 edgeC[3];
    /* 0x40 */ f32 edgeD[3];
    /* 0x4c */ f32 limitA;
    /* 0x50 */ f32 limitB;
    /* 0x54 */ f32 limitC;
    /* 0x58 */ f32 limitD;
    /* 0x5c */ Vec3f vertex[4];
    /* 0x8c */ Vec3f center;
    /* 0x98 */ f32 bounds[2];
    /* 0xa0 */ f32 bounds2[2];
};

struct MapCollision {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 faceCount;         /* faces built so far */
    /* 0x0c */ u8 unk0c[0x10];
    /* 0x1c */ CollisionFace *faces;
    /* 0x20 */ u8 unk20[0x10];
    /* 0x30 */ CollisionMesh *mesh;
};
}

extern "C" {
extern MapCollision g_mapCollision;
void FUN_0026e80c(s32 flag, Vec3f *out, f32 hint);
void FUN_0026ea5c(s32 kind, s32 corner, f32 *edge, f32 *limit, Vec3f origin, Vec3f from, Vec3f to);
void FUN_0026e8a4(s32 kind, s32 count, f32 *bounds, f32 *bounds2, Vec3f a, Vec3f b, Vec3f c, Vec3f d);

/* Appends the collision mesh's faces to the face table, building each one's plane, centre and edge data. */
void FUN_001c2778(u32 owner)
{
    for (u32 i = 0; i < g_mapCollision.mesh->faceCount; i++) {
        const MeshFace *source = &g_mapCollision.mesh->faces[i];
        CollisionFace *face = &g_mapCollision.faces[g_mapCollision.faceCount];
        const MeshVec4 *vertices = g_mapCollision.mesh->vertices;
        Vec3f v0 = vertices[source->vertex[0]].v;
        Vec3f v1 = vertices[source->vertex[1]].v;
        Vec3f v2 = vertices[source->vertex[2]].v;
        Vec3f v3 = vertices[source->vertex[3]].v;
        const MeshVec4 *normal = &g_mapCollision.mesh->normals[source->normal];
        face->normal = normal->v;
        face->distance = normal->v.x * v0.x + normal->v.y * v0.y + normal->v.z * v0.z;
        face->center.x = (v0.x + v1.x + v2.x + v3.x) * 0.25f;
        face->center.y = (v0.y + v1.y + v2.y + v3.y) * 0.25f;
        face->center.z = (v0.z + v1.z + v2.z + v3.z) * 0.25f;
        face->vertex[0] = v0;
        face->vertex[3] = v3;
        face->vertex[2] = v2;
        face->vertex[1] = v1;
        face->vertexCount = 4;
        face->kind = 1;
        face->owner = owner;
        face->unk06 = 0;
        face->enabled = 1;
        face->unk09 = 0;
        face->unk0a = 0;
        Vec3f reference;
        FUN_0026e80c(1, &reference, v0.x);
        FUN_0026ea5c(face->kind, 0, face->edgeA, &face->limitA, reference, v0, v1);
        FUN_0026ea5c(face->kind, 1, face->edgeB, &face->limitB, reference, v1, v2);
        FUN_0026ea5c(face->kind, 2, face->edgeC, &face->limitC, reference, v2, v3);
        FUN_0026ea5c(face->kind, 2, face->edgeD, &face->limitD, reference, v3, v0);
        FUN_0026e8a4(face->kind, face->vertexCount, face->bounds, face->bounds2, v0, v1, v2, v3);
        g_mapCollision.faceCount++;
    }
}

} /* extern "C" */
