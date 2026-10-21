#ifndef SHARD_W6_W6MATCH4_GXPRESETCHANNELS_H
#define SHARD_W6_W6MATCH4_GXPRESETCHANNELS_H

#include "common.h"

struct GxPresetChannels {
    u8 unk000[0xc0];
    s32 firstState; // 0xc0
    u8 unk0c4[0x74];
    s32 secondState; // 0x138
    u8 unk13c[0xc4];
    u8 flags[2]; // 0x200
};

#endif
