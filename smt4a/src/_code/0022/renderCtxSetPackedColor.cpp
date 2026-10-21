/* NON_MATCHING: VFP channel live ranges and scalar stores differ from retail's consecutive first-three-channel VSTM grouping. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {

extern EffectColor DAT_006472dc;


// Channel labels are provisional; preserve the engine's high-to-low packed order.
void renderCtxSetPackedColor(u32 packed)
{
    const f32 scale = 1.0f / 255.0f;
    DAT_006472dc.alpha = (f32)(packed & 0xff) * scale;
    DAT_006472dc.red = (f32)(packed >> 24) * scale;
    DAT_006472dc.green = (f32)((packed & 0xffffff) >> 16) * scale;
    DAT_006472dc.blue = (f32)((packed & 0xffff) >> 8) * scale;
}

} /* extern "C" */
