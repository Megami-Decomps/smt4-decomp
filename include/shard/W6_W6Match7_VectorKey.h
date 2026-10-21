#ifndef SHARD_W6_W6MATCH7_VECTORKEY_H
#define SHARD_W6_W6MATCH7_VECTORKEY_H
#include "common.h"

struct VectorKey {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 frame;
};

struct KeyVector {
    f32 x, y, z;
};

struct VectorKeyValue {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ KeyVector position;
};
#endif
