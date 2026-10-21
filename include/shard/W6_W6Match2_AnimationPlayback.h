#ifndef SHARD_W6_W6MATCH2_ANIMATION_PLAYBACK_H
#define SHARD_W6_W6MATCH2_ANIMATION_PLAYBACK_H

#include "common.h"

struct AnimationClip {
    u32 unk00;  // 0x00
    u8 flags;   // 0x04
    u8 unk05[3];
    f32 duration; // 0x08
};

struct AnimationPlayback {
    u8 data[0x0c]; // 0x00
};

struct AnimationSelection {
    u32 index;             // 0x00
    f32 time;              // 0x04
    u32 unk08;             // 0x08
    AnimationClip* clip;   // 0x0c
    u32 unk10;             // 0x10
    AnimationPlayback playback; // 0x14
    u8 flags;              // 0x20
};

#endif
