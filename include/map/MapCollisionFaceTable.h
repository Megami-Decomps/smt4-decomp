#ifndef SMT4_MAP_MAPCOLLISIONFACETABLE_H
#define SMT4_MAP_MAPCOLLISIONFACETABLE_H

#include "common.h"
#include "shard/S1Mover.h"

struct MeshVec4 {
    Vec3f v;
    f32 w;
};

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

struct MapCollisionFaceTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 faceCount;         /* faces built so far */
    /* 0x0c */ u8 unk0c[0x10];
    /* 0x1c */ CollisionFace *faces;
    /* 0x20 */ u8 unk20[0x10];
    /* 0x30 */ CollisionMesh *mesh;
};

#endif
