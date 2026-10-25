/* NON_MATCHING: frame selection (retail `adds rX, rY, #0` + ldrne, built `cmp` + moveq) and the packed-color reload (retail one vldmia {s1-s4} after the product stores, built vldr + vldmia) differ; the VFP factor copy, product multiply and REV byte getters match. */
#include "shard/W6_W6Match8_ScreenEffect.h"
#include "shard/W6_W6Match3_EffectColor.h"
#include "gfx/EffectColorMath.h"

static __inline void screenEffectSetPoint(Point2 *point, f32 x, f32 y)
{
    point->x = x;
    point->y = y;
}


extern "C" {
extern EffectColorProductState DAT_006471dc;
void renderCtxSetPackedColor(u32 color);
f32 FUN_0034f8b4(const u8 *curve, s32 frame, s32 duration);
u32 FUN_0038136c(const u8 *curve, const ScreenEffectWeightTrack *weight,
                 s32 frame, s32 duration);

// Sample the lifetime curves, modulate the job color and update the screen quad.
void screenEffectUpdateColorGeometry(ScreenEffectJob *job)
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
        screenEffectSetPoint(&output->offset, 0.0f, 0.0f);
        screenEffectSetPoint(&output->center, 200.0f, 120.0f);
        screenEffectSetPoint(&output->size, 400.0f, 240.0f);
        output->renderTag = resource->weight.renderTag;
    }
    if (duration < frame) {
        output->color.a = 0;
        return;
    }

    u32 curveColor = FUN_0038136c(resource->colorCurve, &resource->weight,
                                 frame, duration);
    renderCtxSetPackedColor(job->color);
    effectColorCopy(&DAT_006471dc.color, &DAT_006471dc.factor);
    renderCtxSetPackedColor(curveColor);
    effectColorMultiply(&DAT_006471dc.color, &DAT_006471dc.color, &DAT_006471dc.factor);

    u32 packed = effectColorPack(DAT_006471dc.color);
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);

    output->scale = FUN_0034f8b4(resource->scaleCurve, frame, duration) * 0.01f + 1.0f;
    output->amount = FUN_0034f8b4(resource->amountCurve, frame, duration) * 0.01f;
}
}
