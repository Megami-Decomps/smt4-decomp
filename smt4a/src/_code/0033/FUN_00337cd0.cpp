/* NON_MATCHING: frame selection, default point stores, color-vector copy, and packed-byte extraction lower differently. */
#include "shard/W6_W6Match8_ScreenEffect.h"

extern "C" {
extern EffectColorProductState DAT_006471dc;
void renderCtxSetPackedColor(u32);
f32 FUN_0034f8b4(const u8 *, s32, s32);
u32 FUN_0038136c(const u8 *, const ScreenEffectWeightTrack *, s32, s32);

void FUN_00337cd0(ScreenEffectJob *job)
{
    ScreenEffectResource *resource = job->resource;
    ScreenEffectOutput *output = &resource->output;
    s32 duration = resource->duration;
    s32 frame = duration != 0 ? job->frame : 0;
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
    u32 color = FUN_0038136c(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    DAT_006471dc.factor = DAT_006471dc.color;
    renderCtxSetPackedColor(color);
    DAT_006471dc.color.red *= DAT_006471dc.factor.red;
    DAT_006471dc.color.green *= DAT_006471dc.factor.green;
    DAT_006471dc.color.blue *= DAT_006471dc.factor.blue;
    DAT_006471dc.color.alpha *= DAT_006471dc.factor.alpha;
    RgbaWord packed;
    packed.word = screenEffectPackColor(DAT_006471dc.color);
    output->color.r = packed.rgba.r;
    output->color.g = packed.rgba.g;
    output->color.b = packed.rgba.b;
    output->color.a = packed.rgba.a;
    output->scale = FUN_0034f8b4(resource->scaleCurve, frame, duration) + 1.0f;
    output->amount = FUN_0034f8b4(resource->amountCurve, frame, duration);
}
}
