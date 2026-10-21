/* NON_MATCHING: static-frame selection adds a move, factor copying uses integer LDM/STM, and packing retains VFP results/shift-based bytes instead of retail reloads/REV getters; -O2 candidate for lifetimes/copy. */
#include "shard/W6_W6Match8_ColorQuadEffect.h"

static __inline void colorQuadSetRect(ColorQuadEffectOutput *output,
                                     f32 x, f32 y, f32 width, f32 height)
{
    output->offset.x = x;
    output->offset.y = y;
    output->size.x = width;
    output->size.y = height;
}

extern "C" {
extern EffectColorProductState DAT_004ea81c;
void renderCtxSetPackedColor(u32 color);
u32 FUN_00269694(const u8 *curve, const ScreenEffectWeightTrack *weight,
                 s32 frame, s32 duration);

void colorQuadEffectUpdateLifetimeColor(ColorQuadEffectJob *job)
{
    ColorQuadEffectResource *resource = job->resource;
    ColorQuadEffectOutput *output = &resource->output;
    s32 duration = resource->duration;
    s32 frame = duration != 0 ? job->frame : 0;
    if (duration == 0 || frame == 0) {
        colorQuadSetRect(output, 0.0f, 0.0f, 400.0f, 240.0f);
        output->renderTag = resource->weight.renderTag;
    }
    if (duration < frame) {
        output->color.a = 0;
        return;
    }
    u32 sampledColor = FUN_00269694(resource->colorCurve, &resource->weight,
                                   frame, duration);
    renderCtxSetPackedColor(job->color);
    DAT_004ea81c.factor = DAT_004ea81c.color;
    renderCtxSetPackedColor(sampledColor);
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
}
}
