/* NON_MATCHING: VFP register numbering differs (retail converts red through s4->s5 so the result lands in s1; build uses s2-s4 for red/green/blue). */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {

extern EffectColor DAT_004ea91c;

// Channel labels are provisional; preserve the engine's high-to-low packed order.
void renderCtxSetPackedColor(u32 packed)
{
    DAT_004ea91c.red = (f32)(packed >> 24) * (1.0f / 255.0f);
    DAT_004ea91c.green = (f32)((packed >> 16) & 0xff) * (1.0f / 255.0f);
    DAT_004ea91c.blue = (f32)((packed >> 8) & 0xff) * (1.0f / 255.0f);
    DAT_004ea91c.alpha = (f32)(packed & 0xff) * (1.0f / 255.0f);
}

} // extern "C"
