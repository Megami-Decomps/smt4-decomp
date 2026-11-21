/* NON_MATCHING: the colour block copies keep the scratch slot address in a callee-saved register (retail recomputes it into r0 and copies through r1-r3/ip), and the alpha subtraction stores through that address. */
#include "gfx/ParticleTransform.h"
#include "gfx/VectorScratch.h"
extern "C" {
void FUN_00207ee8(void);
f32 mathAtan2Angle256(f32 y, f32 x);
f32 FUN_00269508(const void *curve, s32 frame, s32 duration);
u32 FUN_00269694(const void *curve, const u32 *opacity, s32 frame, s32 duration);

static __inline void effectColorSubtract(EffectColor *color, const EffectColor *amount)
{
    color->red -= amount->red;
    color->green -= amount->green;
    color->blue -= amount->blue;
    color->alpha -= amount->alpha;
}

// Sample color and scale, deriving heading from the path when requested.
void FUN_0024b660(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous)
{
    sample->color = FUN_00269694(curves->colorCurve, &curves->opacity, frame, curves->duration);
    sample->scale = FUN_00269508(curves->scaleCurve, frame, curves->duration);
    if (curves->angleMode != 2) {
        sample->angle = FUN_00269508(curves->angleCurve, frame, curves->duration);
    } else {
        g_vectorScratch.first.color = sample->position;
        FUN_00207ee8();
        g_vectorScratch.second.color.alpha = g_vectorScratch.first.color.alpha;
        *reinterpret_cast<EffectRgb *>(&g_vectorScratch.second.color) = *reinterpret_cast<const EffectRgb *>(&g_vectorScratch.first.color);
        g_vectorScratch.first.color = *previous;
        FUN_00207ee8();
        effectColorSubtract(&g_vectorScratch.first.color, &g_vectorScratch.second.color);
        f32 x = g_vectorScratch.first.color.red;
        f32 y = g_vectorScratch.first.color.green;
        if (x == 0.0f && y == 0.0f) {
            sample->angle = 0.0f;
        } else {
            sample->angle = mathAtan2Angle256(y, x) * 0.024543693f;
        }
    }
}
}
