#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorProductState DAT_004ea81c;

/* color *= factor, component by component (the factor is the first argument). */
static void effectColorScale(const EffectColor *factor, EffectColor *color)
{
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}

// Multiply the current color by its four component-wise factors.
extern "C" void FUN_00246bd4(void)
{
    effectColorScale(&DAT_004ea81c.factor, &DAT_004ea81c.color);
}
