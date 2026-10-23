#ifndef SHARD_W6_W6MATCH6_COLLISION_QUAD_H
#define SHARD_W6_W6MATCH6_COLLISION_QUAD_H

#include "common.h"
#include <stddef.h>

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
    union {
        u8 unk0c[8];
        s32 segmentCounts[2]; // 0x0c, 0x10
    };
    s32 secondCount; // 0x14
    union { u32 unk18; CollisionQuad *triangles; };
    union { CollisionQuad *first; CollisionQuad *quads; }; // 0x1c
    CollisionQuad *second; // 0x20
    CollisionQuad *unk24; // 0x24
};
typedef char CollisionQueueStateBuffersCheck[
    offsetof(CollisionQueueState, second) == 0x20 &&
    offsetof(CollisionQueueState, unk24) == 0x24 ? 1 : -1];
typedef char CollisionSegmentQueueCountsCheck[
    offsetof(CollisionQueueState, segmentCounts) == 0xC &&
    sizeof(CollisionQueueState) == 0x28 ? 1 : -1];

struct CollisionVectorState {
    u8 unk000[0x320]; // 0x000
    CollisionVector vectors[4]; // 0x320
};

extern "C" CollisionQueueState g_mapCollision;

#endif
