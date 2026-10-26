/* NON_MATCHING: the four loads, products and conversions match; retail issues the four float-to-int conversions ahead of the byte merges (it moves the first two results before converting the last two), armcc here interleaves them. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern EffectColor DAT_004ea91c;

static u32 effectColorPackFrom(EffectColor color)
{
    return ((u32)(color.red * 255.0f) << 24) | (((u32)(color.green * 255.0f) & 255) << 16) |
           (((u32)(color.blue * 255.0f) & 255) << 8) | ((u32)(color.alpha * 255.0f) & 255);
}

// Packs normalized floating RGBA components into an RRGGBBAA word.
u32 FUN_00246c28()
{
    return effectColorPackFrom(DAT_004ea91c);
}
}
