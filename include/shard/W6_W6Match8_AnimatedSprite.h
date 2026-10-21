#ifndef SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H
#define SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H

#include "common.h"

struct UiAnimatedSprite {
    u8 unk00[0x5e];
    s16 frame;
    union {
        u8 unk60[0x2a];
        struct {
            u8 unk60[0x26];
            u8 channels[4]; // 0x86..0x89: the four completion channels
        } completion;
    };
    s8 finished; // 0x8a
    u8 unk8b;
};

static __inline bool uiAnimatedSpriteIsFinished(const UiAnimatedSprite *sprite)
{
    return sprite->finished != 0;
}

#endif
