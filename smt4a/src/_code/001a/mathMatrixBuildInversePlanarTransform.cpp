/* NON_MATCHING: retail keeps the zero angles' sign flags and table conversions live (no constant folding) and schedules the matrix differently. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry g_sinCosTable[];
void nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(f32 *, const f32 *, const PhaseVector *);
void FUN_001b4a00(f32 *, const PhaseVector *, const f32 *);

// Build the inverse planar rotation and translate around the requested origin.
void mathMatrixBuildInversePlanarTransform(f32 *matrix, f32 angle, f32 x, f32 y)
{
    PhaseVector origin;
    origin.x = x;
    origin.y = y;
    origin.z = 0.0f;
    PhaseVector inverseOrigin;
    inverseOrigin.x = -x;
    inverseOrigin.y = -y;
    inverseOrigin.z = 0.0f;
    PhaseSinCos xRotation = samplePhase(g_sinCosTable, 0.0f);
    PhaseSinCos yRotation = samplePhase(g_sinCosTable, 0.0f);
    PhaseSinCos zRotation = samplePhase(g_sinCosTable, 256.0f - angle);
    matrix[3] = 0.0f;
    matrix[7] = 0.0f;
    matrix[8] = -yRotation.sine;
    matrix[11] = 0.0f;
    matrix[12] = 0.0f;
    matrix[13] = 0.0f;
    matrix[15] = 1.0f;
    matrix[14] = 0.0f;
    matrix[0] = zRotation.cosine * yRotation.cosine;
    matrix[4] = zRotation.sine * yRotation.cosine;
    matrix[1] = xRotation.sine * zRotation.cosine * yRotation.sine - xRotation.cosine * zRotation.sine;
    matrix[6] = xRotation.cosine * zRotation.sine * yRotation.sine - xRotation.sine * zRotation.cosine;
    matrix[2] = xRotation.sine * zRotation.sine + xRotation.cosine * zRotation.cosine * yRotation.sine;
    matrix[5] = xRotation.cosine * zRotation.cosine + xRotation.sine * zRotation.sine * yRotation.sine;
    matrix[9] = xRotation.sine * yRotation.cosine;
    matrix[10] = xRotation.cosine * yRotation.cosine;
    nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(matrix, matrix, &inverseOrigin);
    FUN_001b4a00(matrix, &origin, matrix);
}
}
