/* NON_MATCHING: only the integer channel extraction order/registers differ (the struct copy now stores with vstmia like retail). */
#include "gfx/EffectColorMath.h"

extern "C" {
extern EffectColor DAT_006472dc;

// Set the current floating-point color from packed RGBA bytes.
void asdGxSetEffectColorFromRGBA8(u32 packed)
{
    DAT_006472dc = effectColorUnpack(packed);
}
}
