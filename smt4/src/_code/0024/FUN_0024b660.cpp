/* NON_MATCHING: vector copies and component-subtraction scheduling differ from retail. */
#include "gfx/ParticleTransform.h"
extern "C" {
extern EffectColorProductState DAT_004ea81c;
void FUN_00207ee8(void);
f32 FUN_0024c418(f32 y, f32 x);
f32 FUN_00269508(const void *curve, s32 frame, s32 duration);
u32 FUN_00269694(const void *curve, const u32 *opacity, s32 frame, s32 duration);

// Sample color and scale, deriving heading from the path when requested.
void FUN_0024b660(ParticleTransformSample *sample, ParticleTransformCurves *curves, s32 frame, const EffectColor *previous)
{
    sample->color = FUN_00269694(curves->colorCurve, &curves->opacity, frame, curves->duration);
    sample->scale = FUN_00269508(curves->scaleCurve, frame, curves->duration);
    if (curves->angleMode != 2) {
        sample->angle = FUN_00269508(curves->angleCurve, frame, curves->duration);
    } else {
        DAT_004ea81c.color = sample->position;
        FUN_00207ee8();
        DAT_004ea81c.factor.alpha = DAT_004ea81c.color.alpha;
        DAT_004ea81c.factor.red = DAT_004ea81c.color.red;
        DAT_004ea81c.factor.green = DAT_004ea81c.color.green;
        DAT_004ea81c.factor.blue = DAT_004ea81c.color.blue;
        DAT_004ea81c.color = *previous;
        FUN_00207ee8();
        DAT_004ea81c.color.red -= DAT_004ea81c.factor.red;
        DAT_004ea81c.color.green -= DAT_004ea81c.factor.green;
        DAT_004ea81c.color.blue -= DAT_004ea81c.factor.blue;
        DAT_004ea81c.color.alpha -= DAT_004ea81c.factor.alpha;
        if (DAT_004ea81c.color.red == 0.0f && DAT_004ea81c.color.green == 0.0f) {
            sample->angle = 0.0f;
            return;
        }
        sample->angle = FUN_0024c418(DAT_004ea81c.color.green, DAT_004ea81c.color.red) * 0.024543693f;
    }
}
}
