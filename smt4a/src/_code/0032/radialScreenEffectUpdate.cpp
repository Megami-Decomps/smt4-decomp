/* NON_MATCHING: duration/frame registers (r8/r7 in retail), the center/min/max stores (retail reloads x/y with two vldr and stores each, built vldmia/vstmia) and the packed-color reload (retail vldr + vldmia {s2-s3} + vldr) differ; the factor copy, product multiply and REV byte getters match. */
#include "shard/W6_W6Match6_RadialScreenEffect.h"
#include "gfx/EffectColorMath.h"
#include "gfx/VectorScratch.h"

extern "C" {
f32 FUN_0034f8b4(const u8 *, s32, s32);
f32 screenEffectProjectWorldRadius(f32 radius);
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
        g_vectorScratch.first.color = job->position;
        radius = screenEffectProjectWorldRadius(job->radiusScale * radius);
        f32 x = g_vectorScratch.first.color.red;
        f32 y = g_vectorScratch.first.color.green;
        output->center.x = x;
        output->center.y = y;
        output->minimum.x = x - radius;
        output->minimum.y = y - radius;
        output->maximum.x = x + radius;
        output->maximum.y = y + radius;
    }
    u32 sampledColor = FUN_0038136c(resource->colorCurve, &resource->weight, frame, duration);
    renderCtxSetPackedColor(job->color);
    effectColorCopy(&g_vectorScratch.first.color, &g_vectorScratch.second.color);
    renderCtxSetPackedColor(sampledColor);
    effectColorMultiply(&g_vectorScratch.first.color, &g_vectorScratch.first.color, &g_vectorScratch.second.color);
    u32 packed = effectColorPack(g_vectorScratch.first.color);
    output->color.r = __rev(packed) >> 24;
    output->color.g = __rev(packed) >> 16;
    output->color.b = __rev(packed) >> 8;
    output->color.a = __rev(packed);
    output->renderTag = resource->weight.renderTag;
}
}
