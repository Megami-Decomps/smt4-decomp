/* NON_MATCHING: normalized color unpack/pack scheduling, scratch pointers and callback registers differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectTimeline.h"
#include "gfx/EffectColorMath.h"

static void effectColorAssign(EffectColor *destination, const EffectColor *source)
{
    *destination = *source;
}

static void effectColorScale(const EffectColor *factor, EffectColor *color)
{
    color->red *= factor->red;
    color->green *= factor->green;
    color->blue *= factor->blue;
    color->alpha *= factor->alpha;
}

static u32 effectColorPackFrom(EffectColor color)
{
    return ((u32)(color.red * 255.0f) << 24) | (((u32)(color.green * 255.0f) & 255) << 16) |
           (((u32)(color.blue * 255.0f) & 255) << 8) | ((u32)(color.alpha * 255.0f) & 255);
}

extern "C" {
extern EffectColorProductState g_vectorScratch;

// Apply the parent's tint to each child's local color and dispatch the combined resource color.
void FUN_001b4c1c(EffectTimelinePart *owner, u32 packed)
{
    owner->tint.color = packed;
    EffectColor base = effectColorUnpack(packed);
    g_vectorScratch.color = base;
    for (EffectTimelinePart *child = owner->children; child != NULL; child = child->next) {
        g_vectorScratch.color = effectColorUnpack(child->tint.color);
        g_vectorScratch.factor = base;
        effectColorScale(&g_vectorScratch.factor, &g_vectorScratch.color);
        u32 color = effectColorPackFrom(g_vectorScratch.color);
        Resource *resource = child->block;
        void (*apply)(void *, u32) = g_handlerTable[resource->type].setPackedColor;
        if (apply != NULL) {
            apply(resource->data, color);
        }
    }
}
}
