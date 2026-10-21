#ifndef SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H
#define SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H

#include "common.h"

struct BgmChannelSelection {
    u32 unk00;
    s32 selected;
};

struct BgmRequestChannel {
    u8 unk00[8];
    u32 fadeFrames;
    u8 unk0c[0x10];
    u32 flags;
};

#endif
