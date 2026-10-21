/* NON_MATCHING: global-pointer and default-color store-base registers are exchanged (retail r2/r1, compiled r1/r2). */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* DAT_00433a58;

// Use opaque mid-gray unless the effect's RGB override is enabled.
extern "C" void FUN_00201148(EffectColor* color)
{
    color->red = 0.5f;
    color->green = 0.5f;
    color->blue = 0.5f;
    color->alpha = 1.0f;
    if (DAT_00433a58 != NULL && DAT_00433a58->enabled != 0) {
        color->red = DAT_00433a58->red;
        color->green = DAT_00433a58->green;
        color->blue = DAT_00433a58->blue;
    }
}
