#ifndef SHARD_W6_W6MATCH8_COLOR_QUAD_EFFECT_H
#define SHARD_W6_W6MATCH8_COLOR_QUAD_EFFECT_H

#include "shard/W6_W6Match8_ScreenEffect.h"

struct ColorQuadEffectOutput {
    Rgba color;
    u32 renderTag;
    Point2 offset;
    Point2 size;
};
struct ColorQuadEffectResource {
    u8 colorCurve[0x24];
    ScreenEffectWeightTrack weight; // 0x24
    u8 unk34[0x84];
    s32 duration;                  // 0xb8
    u8 unkbc[4];
    ColorQuadEffectOutput output;  // 0xc0
};
struct ColorQuadEffectJob {
    u8 unk00[0x10];
    u32 color;                     // 0x10
    u8 unk14[8];
    s32 frame;                     // 0x1c
    u8 unk20[4];
    ColorQuadEffectResource *resource; // 0x24
};

#endif
