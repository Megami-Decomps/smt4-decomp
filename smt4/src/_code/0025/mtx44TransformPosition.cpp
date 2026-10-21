/* NON_MATCHING: matrix inputs remain scalar loads and row/FMA registers differ from retail's full-matrix VLDM pipeline. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/S1Mover.h"

// Transform a position (implicit w = 1), allowing the output to overlap either input.
extern "C" void mtx44TransformPosition(f32* output, const Matrix44* matrix, const Vec3f* position)
{
    f32 result[4];
    for (u32 row = 0; row < 4; ++row) {
        result[row] = matrix->values[row * 4 + 3];
        result[row] += matrix->values[row * 4] * position->x;
        result[row] += matrix->values[row * 4 + 1] * position->y;
        result[row] += matrix->values[row * 4 + 2] * position->z;
    }
    for (u32 row = 0; row < 4; ++row) {
        output[row] = result[row];
    }
}
