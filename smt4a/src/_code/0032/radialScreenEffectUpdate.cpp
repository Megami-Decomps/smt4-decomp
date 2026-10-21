/* NON_MATCHING: point/factor stores, VFP live ranges and shift-based packed-byte getters differ from retail's REV getters; alternate optimization may fix live ranges. */
#include "shard/W6_W6Match6_RadialScreenEffect.h"

extern "C" {
extern EffectColorProductState DAT_006471dc;
f32 FUN_0034f8b4(const u8 *, s32, s32);
f32 FUN_002914e8(f32 radius);
u32 FUN_0038136c(const u8 *, const ScreenEffectWeightTrack *, s32, s32);
void renderCtxSetPackedColor(u32 color);

void radialScreenEffectUpdate(RadialScreenEffectJob *job)
{
    RadialScreenEffectResource *resource = job->resource;
    RadialScreenEffectOutput *output = &resource->output;
    s32 duration = resource->duration;
    s32 frame;
    if (duration == 0) {
        frame = 0;
    } else {
        frame = job->frame;
        if (duration < frame) {
            output->color.a = 0;
            return;
        }
    }
    f32 radius = FUN_0034f8b4(resource->radiusCurve, frame, duration);
    if (resource->screenCentered) {
        output->center.x = 200.0f;
        output->center.y = 120.0f;
        output->minimum.x = 200.0f - radius;
        output->minimum.y = 120.0f - radius;
        output->maximum.x = radius + 200.0f;
        output->maximum.y = radius + 120.0f;
    } else {
        DAT_006471dc.color = job->position;
        radius = FUN_002914e8(job->radiusScale * radius);
        f32 x = DAT_006471dc.color.red;
        f32 y = DAT_006471dc.color.green;
        output->center.x = x;
        output->center.y = y;
        output->minimum.x = x - radius;
        output->minimum.y = y - radius;
        output->maximum.x = x + radius;
        output->maximum.y = y + radius;
    }
    u32 sampledColor = FUN_0038136c(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    DAT_006471dc.factor = DAT_006471dc.color;
    renderCtxSetPackedColor(sampledColor);
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
    output->renderTag = resource->weight.renderTag;
}
}
