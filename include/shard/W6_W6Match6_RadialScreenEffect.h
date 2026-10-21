#ifndef SHARD_W6_W6MATCH6_RADIALSCREENEFFECT_H
#define SHARD_W6_W6MATCH6_RADIALSCREENEFFECT_H

#include "shard/W6_W6Match8_ScreenEffect.h"

struct RadialScreenEffectOutput {
    u32 unk00;
    Point2 center;           // 0x04
    Rgba color;              // 0x0c
    u32 renderTag;           // 0x10
    Point2 minimum;          // 0x14
    Point2 maximum;          // 0x1c
};
struct RadialScreenEffectResource {
    u8 colorCurve[0x24];
    ScreenEffectWeightTrack weight; // 0x24
    u8 unk34[0x58];
    u8 radiusCurve[0x2c];     // 0x8c
    s32 duration;            // 0xb8
    u8 screenCentered;       // 0xbc
    u8 unkbd[3];
    RadialScreenEffectOutput output; // 0xc0
};
struct RadialScreenEffectJob {
    EffectColor position;    // 0x00
    u32 color;               // 0x10
    f32 radiusScale;         // 0x14
    u32 unk18;
    s32 frame;               // 0x1c
    u32 unk20;
    RadialScreenEffectResource *resource; // 0x24
};

#endif
