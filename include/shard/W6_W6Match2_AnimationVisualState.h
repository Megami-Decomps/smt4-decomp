#ifndef SHARD_W6_W6MATCH2_ANIMATION_VISUAL_STATE_H
#define SHARD_W6_W6MATCH2_ANIMATION_VISUAL_STATE_H

#include "common.h"

struct AnimationVisualPart {
    u8 unk000[0x1f6]; // 0x000
    u8 enabled;        // 0x1f6
};

struct AnimationVisualModel {
    u8 unk00[0x24];          // 0x00
    AnimationVisualPart** parts; // 0x24
};

struct AnimationVisualBinding {
    u32 unk00[2];            // 0x00
    AnimationVisualModel* model; // 0x08
};

struct AnimationVisualState {
    u8 unk00[8];               // 0x00
    AnimationVisualBinding* binding; // 0x08
    u8 unk0c[0x20];            // 0x0c
    u32 state;                  // 0x2c
};

#endif
