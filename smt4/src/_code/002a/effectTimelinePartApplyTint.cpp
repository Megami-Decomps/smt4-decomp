/* NON_MATCHING: normalized color unpack/pack scheduling, scratch pointers and callback registers differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include "gfx/EffectColorMath.h"
#include "gfx/VectorScratch.h"

extern "C" {

// Apply the parent's tint to each child's local color and dispatch the combined resource color.
void effectTimelinePartApplyTint(EffectTimelinePart *owner, u32 packed)
{
    owner->tint.color = packed;
    EffectColor base = effectColorUnpack(packed);
    g_vectorScratch.first.color = base;
    for (EffectTimelinePart *child = owner->children; child != NULL; child = child->next) {
        g_vectorScratch.first.color = effectColorUnpack(child->tint.color);
        g_vectorScratch.second.color = base;
        effectColorMultiply(&g_vectorScratch.first.color, &g_vectorScratch.first.color, &g_vectorScratch.second.color);
        u32 color = effectColorPack(g_vectorScratch.first.color);
        Resource *resource = child->block;
        void (*apply)(void *, u32) = g_handlerTable[resource->type].setPackedColor;
        if (apply != NULL) {
            apply(resource->data, color);
        }
    }
}
}
