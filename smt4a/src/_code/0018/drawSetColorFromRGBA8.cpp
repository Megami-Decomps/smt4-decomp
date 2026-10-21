/* NON_MATCHING: RGB VFP registers/store batching and alpha/scale constant scheduling differ from retail. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
void FUN_001834e4(const EffectColor *color);

// The packed low byte is ignored: this draw path always uses opaque alpha.
void drawSetColorFromRGBA8(u32 packed)
{
    EffectColor color;
    color.red = (f32)(packed >> 24) * (1.0f / 255.0f);
    color.green = (f32)((packed >> 16) & 0xff) * (1.0f / 255.0f);
    color.blue = (f32)((packed >> 8) & 0xff) * (1.0f / 255.0f);
    color.alpha = 1.0f;
    FUN_001834e4(&color);
}
}
