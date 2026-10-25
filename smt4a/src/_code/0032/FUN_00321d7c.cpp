/* NON_MATCHING: register choice of the colour copies and the compare/store scheduling differ (rgb block copy and subtraction pattern now match). */
#include "gfx/ParticleTransform.h"
extern "C" {
extern EffectColorProductState DAT_006471dc;
void FUN_002cf548(void);
f32 FUN_001b640c(f32 y, f32 x);
f32 FUN_0034f8b4(const void *curve, s32 frame, s32 duration);
u32 FUN_0038136c(const void *curve, const u32 *opacity, s32 frame, s32 duration);

static __inline void effectColorSubtract(EffectColor *color, const EffectColor *amount)
{
    color->red -= amount->red;
    color->green -= amount->green;
    color->blue -= amount->blue;
    color->alpha -= amount->alpha;
}

// Sample color and scale, deriving heading from the path when requested.
void FUN_00321d7c(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous)
{
    sample->color = FUN_0038136c(curves->colorCurve, &curves->opacity, frame, curves->duration);
    sample->scale = FUN_0034f8b4(curves->scaleCurve, frame, curves->duration);
    if (curves->angleMode != 2) {
        sample->angle = FUN_0034f8b4(curves->angleCurve, frame, curves->duration);
    } else {
        DAT_006471dc.color = sample->position;
        FUN_002cf548();
        DAT_006471dc.factor.alpha = DAT_006471dc.color.alpha;
        *reinterpret_cast<EffectRgb *>(&DAT_006471dc.factor) = *reinterpret_cast<const EffectRgb *>(&DAT_006471dc.color);
        DAT_006471dc.color = *previous;
        FUN_002cf548();
        effectColorSubtract(&DAT_006471dc.color, &DAT_006471dc.factor);
        if (DAT_006471dc.color.red == 0.0f && DAT_006471dc.color.green == 0.0f) {
            sample->angle = 0.0f;
        } else {
            sample->angle = FUN_001b640c(DAT_006471dc.color.green, DAT_006471dc.color.red) * 0.024543693f;
        }
    }
}
}
