/* NON_MATCHING: global-pointer and default-color store-base registers are exchanged (retail r2/r1, compiled r1/r2). */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* DAT_00570ab4;

// Use opaque mid-gray unless the effect's RGB override is enabled.
static __inline void effectColorSetGray(EffectColor *color, f32 level)
{
    color->red = level;
    color->green = level;
    color->blue = level;
    color->alpha = 1.0f;
}

extern "C" void FUN_002c1c88(EffectColor* color)
{
    effectColorSetGray(color, 0.5f);
    if (DAT_00570ab4 != NULL && DAT_00570ab4->enabled != 0) {
        color->red = DAT_00570ab4->red;
        color->green = DAT_00570ab4->green;
        color->blue = DAT_00570ab4->blue;
    }
}
