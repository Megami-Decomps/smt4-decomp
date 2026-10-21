#ifndef SHARD_W6_W6MATCH6_COLLISION_QUAD_H
#define SHARD_W6_W6MATCH6_COLLISION_QUAD_H

#include "common.h"

struct CollisionVector { f32 x, y, z; };
struct CollisionQuad {
    u32 unk00;
    s8 enabled;
    u8 vertexCount;
    u16 material;
    u8 active;
    s8 queue;
    u16 tag;
    CollisionVector normal; // 0x0c
    f32 distance; // 0x18
    CollisionVector edgeNormals[4]; // 0x1c
    f32 edgeDistances[4]; // 0x4c
    CollisionVector vertices[4]; // 0x5c
    CollisionVector center; // 0x8c
    u8 unk98[0x10];
};
struct CollisionQueueState {
    union {
        u8 unk00[8];
        struct { u32 unk00; s32 triangleCount; } geometry;
    };
    union { s32 firstCount; s32 quadCount; }; // 0x08
    u8 unk0c[8];
    s32 secondCount; // 0x14
    union { u32 unk18; CollisionQuad *triangles; };
    union { CollisionQuad *first; CollisionQuad *quads; }; // 0x1c
};

extern "C" CollisionQueueState g_mapCollision;

#endif
