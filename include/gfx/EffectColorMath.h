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
    return ((u32)(color.red * 255.0f) << 24) | (((u32)(color.green * 255.0f) & 255) << 16) |
           (((u32)(color.blue * 255.0f) & 255) << 8) | ((u32)(color.alpha * 255.0f) & 255);
}
#endif
