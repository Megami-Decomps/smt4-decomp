/* NON_MATCHING: the screen-centred bounds match (centre in two named locals); retail keeps duration/frame in r8/r7
 * (swapped here), and for a world position loads x/y once into VFP registers and computes x-r, x+r, y-r, y+r where
 * this build copies the centre through core registers and rereads it; the packed-colour reload differs too. */
#include "shard/W6_W6Match6_RadialScreenEffect.h"
#include "gfx/EffectColorMath.h"
#include "gfx/VectorScratch.h"

extern "C" {
f32 FUN_00269508(const u8 *, s32, s32);
f32 screenEffectProjectWorldRadius(f32 radius);
u32 FUN_00269694(const u8 *, const ScreenEffectWeightTrack *, s32, s32);
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
    f32 radius = FUN_00269508(resource->radiusCurve, frame, duration);
    if (resource->screenCentered) {
        f32 x = 200.0f;
        f32 y = 120.0f;
        output->center.x = x;
        output->center.y = y;
        output->minimum.x = x - radius;
        output->minimum.y = y - radius;
        output->maximum.x = radius + x;
        output->maximum.y = radius + y;
    } else {
        g_vectorScratch.first.color = job->position;
        radius = screenEffectProjectWorldRadius(job->radiusScale * radius);
        output->center.x = g_vectorScratch.first.color.red;
        output->center.y = g_vectorScratch.first.color.green;
        output->minimum.x = output->center.x - radius;
        output->minimum.y = output->center.y - radius;
        output->maximum.x = output->center.x + radius;
        output->maximum.y = output->center.y + radius;
    }
    u32 sampledColor = FUN_00269694(resource->colorCurve, &resource->weight, frame, duration);
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
