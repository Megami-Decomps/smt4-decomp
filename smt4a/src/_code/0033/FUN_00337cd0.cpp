/* NON_MATCHING: retail forms the scratch-color address before multiplying; the build forms it
 * afterward and uses different registers to pack and byte-reverse the converted channels. */
#include "shard/W6_W6Match8_ScreenEffect.h"
#include "gfx/EffectColorScratch.h"

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

extern "C" {
void renderCtxSetPackedColor(u32);
f32 FUN_0034f8b4(const u8 *, s32, s32);
u32 colorRampBlendWithFade(const u8 *, const ScreenEffectWeightTrack *, s32, s32);

/* Samples the screen effect's color and geometry curves at the current frame. */
void FUN_00337cd0(ScreenEffectJob *job)
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
    u32 color = colorRampBlendWithFade(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    effectColorAssign(&g_vectorScratch.second.color, &g_vectorScratch.first.color);
    renderCtxSetPackedColor(color);
    effectColorScale(&g_vectorScratch.second.color, &g_vectorScratch.first.color);
    u32 packed = packCurrentEffectColor();
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);
    output->scale = FUN_0034f8b4(resource->scaleCurve, frame, duration) + 1.0f;
    output->amount = FUN_0034f8b4(resource->amountCurve, frame, duration);
}
}
