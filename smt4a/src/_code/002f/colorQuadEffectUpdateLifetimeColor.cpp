/* NON_MATCHING: retail forms &color (r0) before the first product multiply and packs through `vldmia r0, {s1-s4}`; the build adds the address after the product stores and orders the float-to-byte conversions and REV moves differently (helpers, VFP copy, multiply and frame selection match). */
#include "shard/W6_W6Match8_ColorQuadEffect.h"
#include "gfx/EffectColorMath.h"

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

static __inline void colorQuadSetRect(ColorQuadEffectOutput *output,
                                     f32 x, f32 y, f32 width, f32 height)
{
    output->offset.x = x;
    output->offset.y = y;
    output->size.x = width;
    output->size.y = height;
}

extern "C" {
extern EffectColorProductState DAT_006471dc;
void renderCtxSetPackedColor(u32 color);
u32 FUN_0038136c(const u8 *curve, const ScreenEffectWeightTrack *weight,
                 s32 frame, s32 duration);

void colorQuadEffectUpdateLifetimeColor(ColorQuadEffectJob *job)
{
    ColorQuadEffectResource *resource = job->resource;
    ColorQuadEffectOutput *output = &resource->output;
    s32 duration = resource->duration;
    s32 frame;
    if (duration == 0) {
        frame = 0;
    } else {
        frame = job->frame;
    }
    if (duration == 0 || frame == 0) {
        colorQuadSetRect(output, 0.0f, 0.0f, 400.0f, 240.0f);
        output->renderTag = resource->weight.renderTag;
    }
    if (duration < frame) {
        output->color.a = 0;
        return;
    }
    u32 sampledColor = FUN_0038136c(resource->colorCurve, &resource->weight,
                                   frame, duration);
    renderCtxSetPackedColor(job->color);
    effectColorCopy(&DAT_006471dc.color, &DAT_006471dc.factor);
    renderCtxSetPackedColor(sampledColor);
    effectColorScale(&DAT_006471dc.factor, &DAT_006471dc.color);
    u32 packed = effectColorPackFrom(DAT_006471dc.color);
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);
}
}
