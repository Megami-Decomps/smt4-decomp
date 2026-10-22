/* NON_MATCHING: VFP register allocation and result-store grouping differ from retail. */
#include "common.h"

/* Multiply a homogeneous vector by a row-major four-by-four matrix. */
extern "C" void FUN_0026e768(f32 *result, const f32 *matrix, const f32 *vector)
{
    const f32 x = vector[0];
    const f32 y = vector[1];
    const f32 z = vector[2];
    const f32 w = vector[3];
    const f32 outX = matrix[0] * x + matrix[1] * y + matrix[2] * z + matrix[3] * w;
    const f32 outY = matrix[4] * x + matrix[5] * y + matrix[6] * z + matrix[7] * w;
    const f32 outZ = matrix[8] * x + matrix[9] * y + matrix[10] * z + matrix[11] * w;
    const f32 outW = matrix[12] * x + matrix[13] * y + matrix[14] * z + matrix[15] * w;
    result[0] = outX;
    result[1] = outY;
    result[2] = outZ;
    result[3] = outW;
}
