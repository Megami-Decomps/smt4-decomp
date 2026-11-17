/* NON_MATCHING: normalized color unpack/pack scheduling, scratch pointers and callback registers differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include "gfx/EffectColorMath.h"

extern "C" {
extern EffectColorProductState g_vectorScratch;

// Apply the parent's tint to each child's local color and dispatch the combined resource color.
void FUN_002a353c(EffectTimelinePart *owner, u32 packed)
{
    owner->tint.color = packed;
    EffectColor base = effectColorUnpack(packed);
    g_vectorScratch.color = base;
    for (EffectTimelinePart *child = owner->children; child != NULL; child = child->next) {
        g_vectorScratch.color = effectColorUnpack(child->tint.color);
        g_vectorScratch.factor = base;
        effectColorMultiply(&g_vectorScratch.color, &g_vectorScratch.color, &g_vectorScratch.factor);
        u32 color = effectColorPack(g_vectorScratch.color);
        Resource *resource = child->block;
        void (*apply)(void *, u32) = g_handlerTable[resource->type].setPackedColor;
        if (apply != NULL) {
            apply(resource->data, color);
        }
    }
}
}
