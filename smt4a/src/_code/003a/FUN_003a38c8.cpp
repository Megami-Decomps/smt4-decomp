/* NON_MATCHING: normalized axis snapshot and matrix initialization/store grouping differ. */
#include "gfx/AxisAngleRotation.h"

extern "C" {
f32 FUN_001b63b0(f32);
f32 FUN_001a1ee0(f32);
extern CameraVectorScratch DAT_006471dc;

void FUN_003a38c8(const Vector4 *axis, Matrix44 *matrix, f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = FUN_001b63b0(phase);
    f32 sine = FUN_001a1ee0(phase);
    buildAxisAngleRotation(axis, matrix, &DAT_006471dc, cosine, sine);
}
}
