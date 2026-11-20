#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorOverride* g_effectColorOverride;

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
    if (g_effectColorOverride != NULL && g_effectColorOverride->enabled != 0) {
        color->red = g_effectColorOverride->red;
        color->green = g_effectColorOverride->green;
        color->blue = g_effectColorOverride->blue;
    }
}
