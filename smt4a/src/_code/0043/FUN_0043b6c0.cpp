/* NON_MATCHING: projected-coordinate VFP allocation and input/output load scheduling differ. */
#include "shard/S1Mover.h"

extern "C" {

// Transform a sequence of three-component positions and divide by homogeneous W.
void FUN_0043b6c0(Vec3f *output, const f32 matrix[4][4], const Vec3f *input, u32 count)
{
    for (u32 index = 0; index < count; ++index) {
        f32 x = input->x;
        f32 y = input->y;
        f32 z = input->z;
        f32 inverseW = 1.0f / (matrix[3][1] * y + matrix[3][2] * z +
                               matrix[3][3] + matrix[3][0] * x);
        f32 projectedX = matrix[0][1] * y + matrix[0][2] * z + matrix[0][3] +
                         matrix[0][0] * x;
        f32 projectedY = matrix[1][1] * y + matrix[1][2] * z + matrix[1][3] +
                         matrix[1][0] * x;
        f32 projectedZ = matrix[2][1] * y + matrix[2][2] * z + matrix[2][3] +
                         matrix[2][0] * x;
        output->x = projectedX * inverseW;
        output->y = projectedY * inverseW;
        output->z = projectedZ * inverseW;
        ++input;
        ++output;
    }
}
}
