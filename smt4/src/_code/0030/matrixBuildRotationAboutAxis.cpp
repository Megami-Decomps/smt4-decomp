/* NON_MATCHING: normalized axis snapshot and matrix initialization/store grouping differ. */
#include "gfx/AxisAngleRotation.h"

extern "C" {
f32 phaseCosInterpolate(f32);
f32 mathSinFixedAngle(f32);
extern CameraVectorScratch g_vectorScratch;

void matrixBuildRotationAboutAxis(const Vector4 *axis, Matrix44 *matrix, f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosInterpolate(phase);
    f32 sine = mathSinFixedAngle(phase);
    buildAxisAngleRotation(axis, matrix, &g_vectorScratch, cosine, sine);
}
}
