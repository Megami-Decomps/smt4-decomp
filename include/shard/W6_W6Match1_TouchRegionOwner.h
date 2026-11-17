#ifndef SHARD_W6_W6MATCH1_TOUCHREGIONOWNER_H
#define SHARD_W6_W6MATCH1_TOUCHREGIONOWNER_H

#include "common.h"

struct TouchRegionOwner {
    u8 unk00[0x58];
    u16 region;
    u16 count;
    s16 x;
    s16 y;
    s16 width;
    s16 height;
};

#endif
