/* NON_MATCHING: written as its IV twin mathMatrixBuildRotationXyz (signs and magnitudes of all three angles first, then the three wraps); retail interleaves the three table lookups and keeps the sign flags in r4/r5 (push {r4-r7}) where the build samples one axis after another. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {

/* Builds Rz * Ry * Rx, with a full turn represented by 256 phase units. */
void FUN_001a1c28(Matrix44 *matrix, f32 xAngle, f32 yAngle, f32 zAngle)
{
    bool xNegative = xAngle < 0.0f;
    f32 xPhase = fabsf(xAngle);
    bool yNegative = yAngle < 0.0f;
    f32 yPhase = fabsf(yAngle);
    bool zNegative = zAngle < 0.0f;
    f32 zPhase = fabsf(zAngle);
    xPhase = wrapPhase(xPhase);
    yPhase = wrapPhase(yPhase);
    zPhase = wrapPhase(zPhase);
    PhaseSinCos x = lookupPhase(g_sinCosTable, xPhase, xNegative);
    PhaseSinCos y = lookupPhase(g_sinCosTable, yPhase, yNegative);
    PhaseSinCos z = lookupPhase(g_sinCosTable, zPhase, zNegative);
    matrix->values[3] = 0.0f;
    matrix->values[7] = 0.0f;
    matrix->values[8] = -y.sine;
    matrix->values[11] = 0.0f;
    matrix->values[12] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[15] = 1.0f;
    matrix->values[14] = 0.0f;
    matrix->values[0] = z.cosine * y.cosine;
    matrix->values[4] = z.sine * y.cosine;
    matrix->values[1] = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    matrix->values[6] = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    matrix->values[2] = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    matrix->values[5] = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    matrix->values[9] = x.sine * y.cosine;
    matrix->values[10] = x.cosine * y.cosine;
}
}
