/* NON_MATCHING: frame selection (retail `adds rX, rY, #0` + ldrne, built `cmp` + moveq), the default point stores' pool order and the packed-color reload (retail one vldmia {s1-s4} after the product stores, built vldr + vldmia) differ; the VFP factor copy, product multiply and REV byte getters match. */
#include "shard/W6_W6Match8_ScreenEffect.h"
#include "gfx/EffectColorMath.h"

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
    effectColorCopy(&DAT_004ea81c.color, &DAT_004ea81c.factor);
    renderCtxSetPackedColor(color);
    effectColorMultiply(&DAT_004ea81c.color, &DAT_004ea81c.color, &DAT_004ea81c.factor);
    u32 packed = effectColorPack(DAT_004ea81c.color);
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);
    output->scale = FUN_00269508(resource->scaleCurve, frame, duration) + 1.0f;
    output->amount = FUN_00269508(resource->amountCurve, frame, duration);
}
}
