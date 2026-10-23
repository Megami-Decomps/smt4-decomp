/* NON_MATCHING: normalized axis snapshot and matrix initialization/store grouping differ. */
#include "gfx/AxisAngleRotation.h"

extern "C" {
f32 phaseCosInterpolate(f32);
f32 FUN_002b70cc(f32);
extern CameraVectorScratch DAT_004ea81c;

void FUN_0030f8f4(const Vector4 *axis, Matrix44 *matrix, f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosInterpolate(phase);
    f32 sine = FUN_002b70cc(phase);
    buildAxisAngleRotation(axis, matrix, &DAT_004ea81c, cosine, sine);
}
}
