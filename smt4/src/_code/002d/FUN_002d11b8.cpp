/* NON_MATCHING: frame selection, default point stores, color-vector copy, and packed-byte extraction lower differently. */
#include "shard/W6_W6Match8_ScreenEffect.h"

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
    u32 color = FUN_00269694(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    DAT_004ea81c.factor = DAT_004ea81c.color;
    renderCtxSetPackedColor(color);
    DAT_004ea81c.color.red *= DAT_004ea81c.factor.red;
    DAT_004ea81c.color.green *= DAT_004ea81c.factor.green;
    DAT_004ea81c.color.blue *= DAT_004ea81c.factor.blue;
    DAT_004ea81c.color.alpha *= DAT_004ea81c.factor.alpha;
    RgbaWord packed;
    packed.word = screenEffectPackColor(DAT_004ea81c.color);
    output->color.r = packed.rgba.r;
    output->color.g = packed.rgba.g;
    output->color.b = packed.rgba.b;
    output->color.a = packed.rgba.a;
    output->scale = FUN_00269508(resource->scaleCurve, frame, duration) + 1.0f;
    output->amount = FUN_00269508(resource->amountCurve, frame, duration);
}
}
