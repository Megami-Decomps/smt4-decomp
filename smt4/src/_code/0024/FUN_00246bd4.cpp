/* NON_MATCHING: retail computes the factor address (&DAT.factor) before the color address; the natural color-then-factor source emits the ADDs in the other order and the first VFP load order differs. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorProductState DAT_004ea81c;

// Multiply the current color by its four component-wise factors.
extern "C" void FUN_00246bd4(void)
{
    EffectColor* color = &DAT_004ea81c.color;
    const EffectColor* factor = &DAT_004ea81c.factor;
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}
