/* NON_MATCHING: zero-angle phase sampling and matrix/stack scheduling differ from retail (see mathMatrixBuildInversePlanarTransform); -O2 candidate. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00536d14[];
void FUN_001d3e14(f32 *, const PhaseVector *);
void nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(f32 *, const f32 *, const PhaseVector *);
void FUN_001b4a00(f32 *, const PhaseVector *, const f32 *);

/* Build a rotation by `angle` about the point (x, y), scaled by `scale` around it. */
void FUN_003d4298(f32 *matrix, f32 x, f32 y, f32 scale, f32 angle)
{
    PhaseVector origin = { x, y, 0.0f };
    PhaseVector inverseOrigin = { -x, -y, 0.0f };
    PhaseVector scaling = { scale, scale, 0.0f };
    PhaseSinCos xRotation = samplePhase(DAT_00536d14, 0.0f);
    PhaseSinCos yRotation = samplePhase(DAT_00536d14, 0.0f);
    PhaseSinCos zRotation = samplePhase(DAT_00536d14, angle);
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
    FUN_001d3e14(matrix, &scaling);
    nn_math_ARMv6_MTX34MultTranslateAsm_1B4A20(matrix, matrix, &inverseOrigin);
    FUN_001b4a00(matrix, &origin, matrix);
}
}
