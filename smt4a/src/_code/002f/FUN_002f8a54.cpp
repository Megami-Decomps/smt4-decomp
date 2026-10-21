/* NON_MATCHING: global-base/address ADD order and the first component's VFP load order differ. */
#include "shard/W6_W6Match3_EffectColor.h"

extern "C" EffectColorProductState DAT_006471dc;

// Multiply the current color by its four component-wise factors.
extern "C" void FUN_002f8a54(void)
{
    EffectColor* color = &DAT_006471dc.color;
    const EffectColor* factor = &DAT_006471dc.factor;
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}
