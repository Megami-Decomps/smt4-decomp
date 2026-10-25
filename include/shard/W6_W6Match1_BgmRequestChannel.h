#ifndef SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H
#define SHARD_W6_W6MATCH1_BGM_REQUEST_CHANNEL_H

#include "common.h"
#include <stddef.h>

struct BgmChannelSelection {
    u32 unk00;
    s32 selected;
};

struct BgmRequestChannel {
    union {
        u8 unk00[8];
        struct {
            u32 unk00;
            u32 param; // 0x04
        } play;
    };
    u32 fadeFrames;
    union {
        u8 unk0c[0x10];
        struct {
            s32 currentId; // 0x0c
            s32 nextId; // 0x10
            u32 unk14;
            u32 nextParam; // 0x18
        } track;
    };
    u32 flags;
};
typedef char BgmRequestChannelLayoutCheck[
    offsetof(BgmRequestChannel, play.param) == 0x04 &&
    offsetof(BgmRequestChannel, track.nextParam) == 0x18 &&
    offsetof(BgmRequestChannel, flags) == 0x1c ? 1 : -1];

extern "C" {
void bgmStop(s32 id, u32 fadeFrames, s32 force);
}

#endif
