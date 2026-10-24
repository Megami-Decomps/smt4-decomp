#ifndef GFX_EFFECTCOLORUNPACK_H
#define GFX_EFFECTCOLORUNPACK_H

#include "common.h"
#include "shard/W6_W6Match3_EffectColor.h"

/* Expands an RRGGBBAA word into four 0..1 components. */
static __inline void effectColorUnpack(u32 packed, EffectColor *out)
{
    out->red = (f32)(packed >> 24) * (1.0f / 255.0f);
    out->green = (f32)((packed >> 16) & 0xFF) * (1.0f / 255.0f);
    out->blue = (f32)((packed >> 8) & 0xFF) * (1.0f / 255.0f);
    out->alpha = (f32)(packed & 0xFF) * (1.0f / 255.0f);
}

/* Packs four 0..1 components into an RRGGBBAA word. */
static __inline u32 effectColorPack(const EffectColor *color)
{
    u32 red = (u32)(color->red * 255.0f);
    u32 green = (u32)(color->green * 255.0f);
    u32 blue = (u32)(color->blue * 255.0f);
    u32 alpha = (u32)(color->alpha * 255.0f);

    return (red << 24) | ((green & 0xFF) << 16) | ((blue & 0xFF) << 8) | (alpha & 0xFF);
}

#endif
