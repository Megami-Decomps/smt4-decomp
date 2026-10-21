#ifndef SHARD_W6_W6MATCH8_SCREEN_EFFECT_H
#define SHARD_W6_W6MATCH8_SCREEN_EFFECT_H

#include "shard/Shard0036.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W6_W6Match3_EffectColor.h"

struct ScreenEffectWeightTrack {
    u32 value;
    u32 renderTag;
    f32 fadeIn;
    f32 fadeOut;
};

struct ScreenEffectOutput {
    Rgba color;             // 0x00
    u32 renderTag;          // 0x04
    f32 amount;             // 0x08
    f32 scale;              // 0x0c
    Point2 center;          // 0x10
    Point2 offset;          // 0x18
    Point2 size;            // 0x20
};

struct ScreenEffectResource {
    u8 colorCurve[0x24];
    ScreenEffectWeightTrack weight; // 0x24
    u8 scaleCurve[0x2c];            // 0x34
    u8 amountCurve[0x2c];           // 0x60
    u8 unk8c[0x2c];
    s32 duration;                  // 0xb8
    u8 unkbc[4];
    ScreenEffectOutput output;     // 0xc0
};

struct ScreenEffectJob {
    u8 unk00[0x10];
    u32 color;                     // 0x10
    u8 unk14[8];
    s32 frame;                     // 0x1c
    u8 unk20[4];
    ScreenEffectResource *resource; // 0x24
};

// Scratch channel names are provisional; keep the engine's packed-word order.
static __inline u32 screenEffectPackColor(const EffectColor &color)
{
    return ((u32)(color.red * 255.0f) << 24) |
           (((u32)(color.green * 255.0f) & 0xff) << 16) |
           (((u32)(color.blue * 255.0f) & 0xff) << 8) |
           ((u32)(color.alpha * 255.0f) & 0xff);
}

#endif
