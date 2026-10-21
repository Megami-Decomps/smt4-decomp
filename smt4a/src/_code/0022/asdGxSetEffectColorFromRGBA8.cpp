/* NON_MATCHING: channel conversion registers differ and RGB values are stored separately instead of retail's three-register vstmia. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" {
extern EffectColor DAT_006472dc;

// Set the current floating-point color from packed RGBA bytes.
void asdGxSetEffectColorFromRGBA8(u32 packed)
{
    DAT_006472dc.alpha = (f32)(packed & 0xff) * (1.0f / 255.0f);
    DAT_006472dc.red = (f32)(packed >> 24) * (1.0f / 255.0f);
    DAT_006472dc.green = (f32)((packed >> 16) & 0xff) * (1.0f / 255.0f);
    DAT_006472dc.blue = (f32)((packed >> 8) & 0xff) * (1.0f / 255.0f);
}
}
