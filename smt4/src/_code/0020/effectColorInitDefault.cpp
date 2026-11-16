#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* DAT_00433a58;

// Use opaque mid-gray unless the effect's RGB override is enabled.
static __inline void effectColorSetGray(EffectColor *color, f32 level, f32 alpha)
{
    color->red = level;
    color->green = level;
    color->blue = level;
    color->alpha = alpha;
}

extern "C" void effectColorInitDefault(EffectColor* color)
{
    effectColorSetGray(color, 0.5f, 1.0f);
    if (DAT_00433a58 != NULL && DAT_00433a58->enabled != 0) {
        color->red = DAT_00433a58->red;
        color->green = DAT_00433a58->green;
        color->blue = DAT_00433a58->blue;
    }
}
