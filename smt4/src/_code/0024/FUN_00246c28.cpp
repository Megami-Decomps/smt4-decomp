/* NON_MATCHING: VLDmia color snapshot matches, but float multiply/conversion scheduling and packed-channel register allocation differ; retail reuses S1-S4 and accumulates through R0. */
#include "common.h"

struct FloatColor {
    f32 r, g, b, a;
};

extern "C" {
extern FloatColor DAT_004ea91c;

// Packs normalized floating RGBA components into an RRGGBBAA word.
u32 FUN_00246c28()
{
    FloatColor color = DAT_004ea91c;
    u32 red = static_cast<u32>(color.r * 255.0f);
    u32 green = static_cast<u32>(color.g * 255.0f);
    u32 blue = static_cast<u32>(color.b * 255.0f);
    u32 alpha = static_cast<u32>(color.a * 255.0f);
    return (red << 24) | ((green & 0xff) << 16) | ((blue & 0xff) << 8) | (alpha & 0xff);
}
}
