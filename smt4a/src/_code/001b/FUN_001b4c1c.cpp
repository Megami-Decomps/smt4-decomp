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
        effectColorScale(&DAT_006471dc.factor, &DAT_006471dc.color);
        u32 color = effectColorPackFrom(DAT_006471dc.color);
        Resource *resource = child->block;
        void (*apply)(void *, s32) = g_handlerTable[resource->type].callback30;
        if (apply != NULL) {
            apply(resource->data, (s32)color);
        }
    }
}
}
