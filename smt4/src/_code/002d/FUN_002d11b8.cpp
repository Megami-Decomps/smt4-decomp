/* NON_MATCHING: retail forms &color (r0) before the first product multiply and packs through `vldmia r0, {s1-s4}`; the build adds the address after the product stores and orders the float-to-byte conversions and REV moves differently (helpers, VFP copy, multiply and frame selection match). */
#include "shard/W6_W6Match8_ScreenEffect.h"
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
extern EffectColorProductState DAT_004ea81c;
void renderCtxSetPackedColor(u32);
f32 FUN_00269508(const u8 *, s32, s32);
u32 FUN_00269694(const u8 *, const ScreenEffectWeightTrack *, s32, s32);

void FUN_002d11b8(ScreenEffectJob *job)
{
    ScreenEffectResource *resource = job->resource;
    ScreenEffectOutput *output = &resource->output;
    s32 duration = resource->duration;
    s32 frame;
    if (duration == 0) {
        frame = 0;
    } else {
        frame = job->frame;
    }
    if (duration == 0 || frame == 0) {
        output->offset.x = 0.0f;
        output->offset.y = 0.0f;
        output->center.x = 200.0f;
        output->center.y = 120.0f;
        output->size.x = 400.0f;
        output->size.y = 240.0f;
        output->renderTag = resource->weight.renderTag;
    }
    if (duration < frame) {
        output->color.a = 0;
        return;
    }
    u32 color = FUN_00269694(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    effectColorAssign(&DAT_004ea81c.factor, &DAT_004ea81c.color);
    renderCtxSetPackedColor(color);
    effectColorScale(&DAT_004ea81c.factor, &DAT_004ea81c.color);
    u32 packed = effectColorPackFrom(DAT_004ea81c.color);
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);
    output->scale = FUN_00269508(resource->scaleCurve, frame, duration) + 1.0f;
    output->amount = FUN_00269508(resource->amountCurve, frame, duration);
}
}
