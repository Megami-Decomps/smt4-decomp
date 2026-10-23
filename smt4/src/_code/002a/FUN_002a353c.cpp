/* NON_MATCHING: normalized color unpack/pack scheduling, scratch pointers and callback registers differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include "gfx/EffectColorMath.h"

extern "C" {
extern EffectColorProductState DAT_004ea81c;

// Apply the parent's tint to each child's local color and dispatch the combined resource color.
void FUN_002a353c(EffectTimelinePart *owner, u32 packed)
{
    owner->tint.color = packed;
    EffectColor base = effectColorUnpack(packed);
    DAT_004ea81c.color = base;
    for (EffectTimelinePart *child = owner->children; child != NULL; child = child->next) {
        DAT_004ea81c.color = effectColorUnpack(child->tint.color);
        DAT_004ea81c.factor = base;
        effectColorMultiply(&DAT_004ea81c.color, &DAT_004ea81c.color, &DAT_004ea81c.factor);
        u32 color = effectColorPack(DAT_004ea81c.color);
        Resource *resource = child->block;
        void (*apply)(void *, s32) = g_handlerTable[resource->type].callback30;
        if (apply != NULL) {
            apply(resource->data, (s32)color);
        }
    }
}
}
