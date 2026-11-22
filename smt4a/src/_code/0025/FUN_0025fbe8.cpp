/* NON_MATCHING: float scheduling and register allocation differ - retail keeps the four vertices in s16-s27 loaded with vldmia and passes them straight to the edge builders, while armcc here interleaves the loads with the plane/centre computation; the stores and calls are the same. */
#include "shard/S1Mover.h"
#include "map/MapCollisionFaceTable.h"

extern "C" {
extern MapCollisionFaceTable g_mapCollision;
void FUN_001f4d08(s32 axis, Vec3f *out, Vec3f a, Vec3f b, Vec3f c, Vec3f d);
void statusCameraBuildAxisPlane(s32 kind, s32 corner, f32 *edge, f32 *limit, Vec3f origin, Vec3f from, Vec3f to);
void FUN_00226e90(s32 kind, s32 count, f32 *bounds, f32 *bounds2, Vec3f a, Vec3f b, Vec3f c, Vec3f d);

/* Appends the collision mesh's faces to the face table, building each one's plane, centre and edge data. */
void FUN_0025fbe8(u32 owner)
{
    for (u32 i = 0; i < g_mapCollision.mesh->faceCount; i++) {
        CollisionMesh *mesh = g_mapCollision.mesh;
        const MeshFace *source = &mesh->faces[i];
        CollisionFace *face = &g_mapCollision.faces[g_mapCollision.faceCount];
        const MeshVec4 *vertices = mesh->vertices;
        Vec3f v0 = vertices[source->vertex[0]].v;
        Vec3f v1 = vertices[source->vertex[1]].v;
        Vec3f v2 = vertices[source->vertex[2]].v;
        Vec3f v3 = vertices[source->vertex[3]].v;
        const MeshVec4 *normal = &mesh->normals[source->normal];
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
        FUN_001f4d08(1, &reference, v0, v1, v2, v3);
        statusCameraBuildAxisPlane(face->kind, 0, face->edgeA, &face->limitA, reference, v0, v1);
        statusCameraBuildAxisPlane(face->kind, 1, face->edgeB, &face->limitB, reference, v1, v2);
        statusCameraBuildAxisPlane(face->kind, 2, face->edgeC, &face->limitC, reference, v2, v3);
        statusCameraBuildAxisPlane(face->kind, 2, face->edgeD, &face->limitD, reference, v3, v0);
        FUN_00226e90(face->kind, face->vertexCount, face->bounds, face->bounds2, v0, v1, v2, v3);
        g_mapCollision.faceCount++;
    }
}

} /* extern "C" */
