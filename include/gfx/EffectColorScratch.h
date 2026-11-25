#ifndef GFX_EFFECTCOLORSCRATCH_H
#define GFX_EFFECTCOLORSCRATCH_H

#include "gfx/VectorScratch.h"

/* Packs the current scratch color as RRGGBBAA, as in IV's FUN_00246c28. */
static u32 packCurrentEffectColor()
{
    EffectColor color = g_vectorScratch.first.color;
    u32 red = (u32)(color.red * 255.0f);
    u32 green = (u32)(color.green * 255.0f);
    u32 blue = (u32)(color.blue * 255.0f);
    u32 alpha = (u32)(color.alpha * 255.0f);
    return (red << 24) | ((green & 0xFF) << 16) | ((blue & 0xFF) << 8) | (alpha & 0xFF);
}

#endif
