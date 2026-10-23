/* NON_MATCHING: Per-axis sampler inlining serializes interpolation and saves float registers; matrix arithmetic/store scheduling differs. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {
extern const PhaseTrigEntry DAT_00407ed0[256];

/* Builds Rz * Ry * Rx, with a full turn represented by 256 phase units. */
void FUN_002b2144(Matrix44 *matrix, f32 xAngle, f32 yAngle, f32 zAngle)
{
    PhaseSinCos x = samplePhase(DAT_00407ed0, xAngle);
    PhaseSinCos y = samplePhase(DAT_00407ed0, yAngle);
    PhaseSinCos z = samplePhase(DAT_00407ed0, zAngle);
    matrix->values[0] = z.cosine * y.cosine;
    matrix->values[1] = x.sine * z.cosine * y.sine - x.cosine * z.sine;
    matrix->values[2] = x.sine * z.sine + x.cosine * z.cosine * y.sine;
    matrix->values[3] = 0.0f;
    matrix->values[4] = z.sine * y.cosine;
    matrix->values[5] = x.cosine * z.cosine + x.sine * z.sine * y.sine;
    matrix->values[6] = x.cosine * z.sine * y.sine - x.sine * z.cosine;
    matrix->values[7] = 0.0f;
    matrix->values[8] = -y.sine;
    matrix->values[9] = x.sine * y.cosine;
    matrix->values[10] = x.cosine * y.cosine;
    matrix->values[11] = 0.0f;
    matrix->values[12] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[14] = 0.0f;
    matrix->values[15] = 1.0f;
}
}
