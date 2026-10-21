/* NON_MATCHING: static-frame selection has an extra conditional move; factor copying uses integer LDM/STM, and color packing/extraction and VFP live ranges differ from retail's reloads and REV-based byte getters. */
#include "shard/W6_W6Match8_ScreenEffect.h"
#include "shard/W6_W6Match3_EffectColor.h"

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
    s32 frame = duration != 0 ? job->frame : 0;

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
    DAT_006471dc.factor = DAT_006471dc.color;
    renderCtxSetPackedColor(curveColor);
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

    output->scale = FUN_0034f8b4(resource->scaleCurve, frame, duration) * 0.01f + 1.0f;
    output->amount = FUN_0034f8b4(resource->amountCurve, frame, duration) * 0.01f;
}
}
