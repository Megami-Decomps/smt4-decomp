#ifndef SHARD_W6_W6MATCH5_TOUCHOWNER_H
#define SHARD_W6_W6MATCH5_TOUCHOWNER_H

#include "common.h"

struct TouchRegionOwner {
    void *vtable; // 0x00
    u8 unk04[0x56];
    s16 regionCount; // 0x5a
};

#endif
