/* NON_MATCHING: normalized color unpack/pack scheduling, scratch pointers and callback registers differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include "gfx/EffectColorMath.h"

extern "C" {
extern EffectColorProductState DAT_006471dc;

// Apply the parent's tint to each child's local color and dispatch the combined resource color.
void FUN_001b4c1c(EffectTimelinePart *owner, u32 packed)
{
    owner->tint.color = packed;
    EffectColor base = effectColorUnpack(packed);
    DAT_006471dc.color = base;
    for (EffectTimelinePart *child = owner->children; child != NULL; child = child->next) {
        DAT_006471dc.color = effectColorUnpack(child->tint.color);
        DAT_006471dc.factor = base;
        effectColorMultiply(&DAT_006471dc.color, &DAT_006471dc.color, &DAT_006471dc.factor);
        u32 color = effectColorPack(DAT_006471dc.color);
        Resource *resource = child->block;
        void (*apply)(void *, s32) = g_handlerTable[resource->type].callback30;
        if (apply != NULL) {
            apply(resource->data, (s32)color);
        }
    }
}
}
