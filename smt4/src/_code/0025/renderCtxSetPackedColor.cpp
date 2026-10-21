/* NON_MATCHING: VFP channel live ranges and scalar stores differ from retail's consecutive first-three-channel VSTM grouping. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {

extern EffectColor DAT_004ea91c;

// Channel labels are provisional; preserve the engine's high-to-low packed order.
void renderCtxSetPackedColor(u32 packed)
{
    const f32 scale = 1.0f / 255.0f;
    DAT_004ea91c.alpha = (f32)(packed & 0xff) * scale;
    DAT_004ea91c.red = (f32)(packed >> 24) * scale;
    DAT_004ea91c.green = (f32)((packed & 0xffffff) >> 16) * scale;
    DAT_004ea91c.blue = (f32)((packed & 0xffff) >> 8) * scale;
}

} // extern "C"
