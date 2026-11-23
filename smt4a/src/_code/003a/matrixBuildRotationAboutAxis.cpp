/* NON_MATCHING: normalized axis snapshot and matrix initialization/store grouping differ. */
#include "gfx/AxisAngleRotation.h"
#include "gfx/VectorScratch.h"

extern "C" {
f32 phaseCosine(f32);
f32 phaseSine(f32);

void matrixBuildRotationAboutAxis(const Vector4 *axis, Matrix44 *matrix, f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosine(phase);
    f32 sine = phaseSine(phase);
    buildAxisAngleRotation(axis, matrix, &g_vectorScratch, cosine, sine);
}
}
