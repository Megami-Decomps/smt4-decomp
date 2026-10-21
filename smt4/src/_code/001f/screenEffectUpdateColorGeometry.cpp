/* NON_MATCHING: static-frame selection has an extra conditional move; factor copying uses integer LDM/STM, and color packing/extraction and VFP live ranges differ from retail's reloads and REV-based byte getters. */
#include "shard/W6_W6Match8_ScreenEffect.h"
#include "shard/W6_W6Match3_EffectColor.h"

static __inline void screenEffectSetPoint(Point2 *point, f32 x, f32 y)
{
    point->x = x;
    point->y = y;
}


extern "C" {
extern EffectColorProductState DAT_004ea81c;
void renderCtxSetPackedColor(u32 color);
f32 FUN_00269508(const u8 *curve, s32 frame, s32 duration);
u32 FUN_00269694(const u8 *curve, const ScreenEffectWeightTrack *weight,
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

    u32 curveColor = FUN_00269694(resource->colorCurve, &resource->weight,
                                 frame, duration);
    renderCtxSetPackedColor(job->color);
    DAT_004ea81c.factor = DAT_004ea81c.color;
    renderCtxSetPackedColor(curveColor);
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

    output->scale = FUN_00269508(resource->scaleCurve, frame, duration) * 0.01f + 1.0f;
    output->amount = FUN_00269508(resource->amountCurve, frame, duration) * 0.01f;
}
}
