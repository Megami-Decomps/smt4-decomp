/* NON_MATCHING: axis products and diagonal expressions use different VFP registers and store scheduling. */
/* Builds the global axis-angle rotation matrix from the configured axis and an angle in radians. */
#include "gfx/VectorScratch.h"

extern "C" {
f32 phaseCosInterpolate(f32 phase);
f32 mathSinFixedAngle(f32 phase);

void FUN_0030f3e8(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = phaseCosInterpolate(phase);
    f32 sine = mathSinFixedAngle(phase);
    f32 complement = 1.0f - cosine;
    f32 x = g_vectorScratch.first.vector.x;
    f32 y = g_vectorScratch.first.vector.y;
    f32 z = g_vectorScratch.first.vector.z;
    f32 *matrix = g_vectorScratch.matrix.matrix.values;
    matrix[0] = x * x + (1.0f - x * x) * cosine;
    matrix[1] = z * sine + x * y * complement;
    matrix[2] = x * z * complement - y * sine;
    matrix[3] = 0.0f;
    matrix[4] = x * y * complement - z * sine;
    matrix[5] = y * y + (1.0f - y * y) * cosine;
    matrix[6] = x * sine + y * z * complement;
    matrix[7] = 0.0f;
    matrix[8] = y * sine + x * z * complement;
    matrix[9] = y * z * complement - x * sine;
    matrix[10] = z * z + (1.0f - z * z) * cosine;
    matrix[11] = 0.0f;
}
}
