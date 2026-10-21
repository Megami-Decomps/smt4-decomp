/* NON_MATCHING: global-base/address ADD order and the first component's VFP load order differ. */
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
