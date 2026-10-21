#ifndef SHARD_W6_W6MATCH7_COLLISIONPLANES_H
#define SHARD_W6_W6MATCH7_COLLISIONPLANES_H
#include "common.h"

struct CollisionNormal {
    f32 x, y, z;
};

struct CollisionPlanes {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ CollisionNormal normals[4];
    /* 0x4c */ f32 distances[4];
    /* 0x5c */ u8 unk5c[0x3c];
    /* 0x98 */ f32 minimumU;
    /* 0x9c */ f32 minimumV;
    /* 0xa0 */ f32 maximumU;
    /* 0xa4 */ f32 maximumV;
};

union CollisionDistance {
    f32 value;
    s32 bits;
};
#endif
