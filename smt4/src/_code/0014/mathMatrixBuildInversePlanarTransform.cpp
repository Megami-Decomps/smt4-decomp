/* NON_MATCHING: zero-angle sampling retains wrap loops and matrix/stack scheduling differs; -O2 candidate. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[];
void nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(f32 *, const f32 *, const PhaseVector *);
void nn_math_ARMv6_MTX34AddTranslateAsm(f32 *, const PhaseVector *, const f32 *);

// Build the inverse planar rotation and translate around the requested origin.
void mathMatrixBuildInversePlanarTransform(f32 *matrix, f32 angle, f32 x, f32 y)
{
    PhaseVector origin = { x, y, 0.0f };
    PhaseVector inverseOrigin = { -x, -y, 0.0f };
    PhaseSinCos xRotation = samplePhase(DAT_00407ed0, 0.0f);
    PhaseSinCos yRotation = samplePhase(DAT_00407ed0, 0.0f);
    PhaseSinCos zRotation = samplePhase(DAT_00407ed0, 256.0f - angle);
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
    nn_math_ARMv6_MTX34MultTranslateAsm_2A3504(matrix, matrix, &inverseOrigin);
    nn_math_ARMv6_MTX34AddTranslateAsm(matrix, &origin, matrix);
}
}
