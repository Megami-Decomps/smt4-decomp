/* NON_MATCHING: axis products and diagonal expressions use different VFP registers and store scheduling. */
/* Builds the global axis-angle rotation matrix from the configured axis and an angle in radians. */
#include "shard/W8Match1_MatrixRotation.h"

extern "C" {
extern MatrixRotationWork DAT_006471dc;
f32 FUN_001b63b0(f32 phase);
f32 FUN_001a1ee0(f32 phase);

void FUN_003a215c(f32 angle)
{
    f32 phase = angle * 40.743664f;
    f32 cosine = FUN_001b63b0(phase);
    f32 sine = FUN_001a1ee0(phase);
    f32 complement = 1.0f - cosine;
    f32 x = DAT_006471dc.axisInput.values[0];
    f32 y = DAT_006471dc.axisInput.values[1];
    f32 z = DAT_006471dc.axisInput.values[2];
    f32 *matrix = DAT_006471dc.rotation.values;
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
