/* NON_MATCHING: compiler keeps all basis axes live across normalization and copies translation with GPRs instead of VFP. */
#include "shard/W5_W5Match2_MatrixScale.h"
#include <math.h>

static inline void normalizeBasis(f32 *axis)
{
    f32 x = axis[0], y = axis[1], z = axis[2];
    f32 inverseLength = 1.0f / sqrtf(x * x + y * y + z * z);
    axis[0] = x * inverseLength;
    axis[1] = y * inverseLength;
    axis[2] = z * inverseLength;
}

extern "C" {
void nn_math_ARMv6_MTX34InverseAsm(ScaleMatrix *matrix, u32 object);

/* Extract translation and normalized basis columns, reversing the forward axis. */
void FUN_0013afbc(u32 object, f32 *position, f32 *basis)
{
    ScaleMatrix matrix;
    nn_math_ARMv6_MTX34InverseAsm(&matrix, object);
    position[0] = matrix.values[0][3];
    position[1] = matrix.values[1][3];
    position[2] = matrix.values[2][3];
    basis[0] = matrix.values[0][0];
    basis[1] = matrix.values[1][0];
    basis[2] = matrix.values[2][0];
    basis[3] = matrix.values[0][1];
    basis[4] = matrix.values[1][1];
    basis[5] = matrix.values[2][1];
    basis[6] = -matrix.values[0][2];
    basis[7] = -matrix.values[1][2];
    basis[8] = -matrix.values[2][2];
    normalizeBasis(basis);
    normalizeBasis(basis + 3);
    normalizeBasis(basis + 6);
}
}
