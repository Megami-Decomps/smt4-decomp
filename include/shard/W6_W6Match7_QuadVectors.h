#ifndef SHARD_W6_W6MATCH7_QUADVECTORS_H
#define SHARD_W6_W6MATCH7_QUADVECTORS_H
#include "common.h"

struct QuadVector3 {
    f32 x, y, z;
};

struct QuadVector {
    QuadVector3 xyz;
    f32 w;
};

struct QuadVectorState {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ QuadVector corners[4];
    /* 0x6c */ u8 mode;
    /* 0x6d */ u8 unk6d[0x10];
    /* 0x7d */ u8 dirty;
    /* 0x7e */ u8 unk7e[6];
    /* 0x84 */ f32 defaultW;
};
#endif
