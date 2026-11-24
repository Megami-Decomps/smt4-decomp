#include "gfx/ParticleTransform.h"
#include "gfx/VectorScratch.h"
extern "C" {
void FUN_002cf548(void);
f32 mathAtan2Angle256(f32 y, f32 x);
f32 FUN_0034f8b4(const void *curve, s32 frame, s32 duration);
u32 colorRampBlendWithFade(const void *curve, const u32 *opacity, s32 frame, s32 duration);

/* Samples the particle's color, scale and angle; optionally derives its angle from screen-space motion. */
void effSampleParticleTransform(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous)
{
    sample->color = colorRampBlendWithFade(curves->colorCurve, &curves->opacity, frame, curves->duration);
    sample->scale = FUN_0034f8b4(curves->scaleCurve, frame, curves->duration);
    if (curves->angleMode != 2) {
        sample->angle = FUN_0034f8b4(curves->angleCurve, frame, curves->duration);
    } else {
        /* The particle buffer stores its four position components in EffectColor layout. */
        effectColorCopy(&sample->position, &g_vectorScratch.first.color);
        FUN_002cf548();
        effectColorCopy(&g_vectorScratch.first.color, &g_vectorScratch.second.color);
        effectColorCopy(previous, &g_vectorScratch.first.color);
        FUN_002cf548();
        nw::math::VEC4Sub(&g_vectorScratch.first.vec4, &g_vectorScratch.first.vec4, &g_vectorScratch.second.vec4);
        f32 x = g_vectorScratch.first.vec4.x;
        f32 y = g_vectorScratch.first.vec4.y;
        if (x == 0.0f && y == 0.0f) {
            sample->angle = 0.0f;
        } else {
            sample->angle = mathAtan2Angle256(y, x) * 0.024543693f;
        }
    }
}
}
