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

#ifdef __cplusplus
extern "C" {
#endif

u16 FUN_002903f0(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00290d5c(u8 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void nodeTreeReleaseItem(u8 *item);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0021b390(u32 context, s32 category, s32 id, char *destination);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

int FUN_0028e9d0(unsigned arg0);

#ifdef __cplusplus
}
#endif

#endif
