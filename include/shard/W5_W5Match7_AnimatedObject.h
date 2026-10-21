#ifndef SHARD_W5_W5MATCH7_ANIMATEDOBJECT_H
#define SHARD_W5_W5MATCH7_ANIMATEDOBJECT_H
#include "common.h"
struct AnimatedObject {
    /* 0x00 */ union {
        u8 unk00[0x38];
        struct {
            u8 unk00[0x34];
            void *resource; // 0x34
        } animation;
    };
    /* 0x38 */ f32 progress;
};
#endif
