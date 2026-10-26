/* NON_MATCHING: the four multiplies now schedule together like retail; retail converts the first two channels, moves them to core registers, then converts the other two (conversion/vmov order differs). */
#include "common.h"

struct FloatColor {
    f32 r, g, b, a;
};

static u32 colorPack(FloatColor color)
{
    return ((u32)(color.r * 255.0f) << 24) | (((u32)(color.g * 255.0f) & 255) << 16) |
           (((u32)(color.b * 255.0f) & 255) << 8) | ((u32)(color.a * 255.0f) & 255);
}

extern "C" {
extern FloatColor DAT_006472dc;

// Packs normalized floating RGBA components into an RRGGBBAA word.
u32 FUN_00221cb0()
{
    return colorPack(DAT_006472dc);
}
}
