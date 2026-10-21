#ifndef SHARD_W6_W6MATCH3_POINTDIFFERENCE_H
#define SHARD_W6_W6MATCH3_POINTDIFFERENCE_H

#include "common.h"

struct PointLookupRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

struct PointDeltaWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s16 x;
    /* 0x1A */ s16 y;
};

#endif
