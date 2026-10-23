#ifndef GFX_EFFECT_COLOR_MATH_H
#define GFX_EFFECT_COLOR_MATH_H
#include "shard/W6_W6Match3_EffectColor.h"

static inline EffectColor effectColorUnpack(u32 packed)
{
    EffectColor color;
    color.red = (f32)(packed >> 24) * 0.003921569f;
    color.green = (f32)((packed >> 16) & 255) * 0.003921569f;
    color.blue = (f32)((packed >> 8) & 255) * 0.003921569f;
    color.alpha = (f32)(packed & 255) * 0.003921569f;
    return color;
}

static inline void effectColorMultiply(EffectColor *output, const EffectColor *first, const EffectColor *second)
{
    output->red = first->red * second->red;
    output->green = first->green * second->green;
    output->blue = first->blue * second->blue;
    output->alpha = first->alpha * second->alpha;
}

static inline u32 effectColorPack(EffectColor color)
{
    u32 red = (u32)(color.red * 255.0f);
    u32 green = (u32)(color.green * 255.0f);
    u32 blue = (u32)(color.blue * 255.0f);
    u32 alpha = (u32)(color.alpha * 255.0f);
    return (red << 24) | ((green & 255) << 16) | ((blue & 255) << 8) | (alpha & 255);
}
#endif
