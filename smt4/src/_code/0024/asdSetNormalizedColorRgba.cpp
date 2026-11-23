/* NON_MATCHING: written as its Apocalypse twin asdGxSetEffectColorFromRGBA8 (effectColorUnpack); only the integer
 * channel extraction order and registers differ (retail extracts green first and keeps `packed` in r0, alpha in ip). */
#include "gfx/EffectColorMath.h"

extern "C" {
extern EffectColor DAT_004ea91c;

/* Sets the current floating-point color from packed RGBA bytes. */
void asdSetNormalizedColorRgba(u32 packed)
{
    DAT_004ea91c = effectColorUnpack(packed);
}
}
