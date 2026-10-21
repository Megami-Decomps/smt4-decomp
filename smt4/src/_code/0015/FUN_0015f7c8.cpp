/* NON_MATCHING: instruction selection/order differs: retail vldmia r2, {s0-s11}; compiler vldmia r1, {s0-s2}. */
#include "shard/W5_W5Match1_RecordKeys.h"

struct Matrix3x4 { Vector4 rows[3]; };
struct ScaleVector { f32 x, y, z; };

extern "C" {

/* Scales the three matrix rows while preserving the input scale vector. */
void FUN_0015f7c8(Matrix3x4 *output, const ScaleVector *scale, const Matrix3x4 *input)
{
    f32 x = scale->x;
    f32 y = scale->y;
    f32 z = scale->z;
    output->rows[0].x = input->rows[0].x * x;
    output->rows[0].y = input->rows[0].y * x;
    output->rows[0].z = input->rows[0].z * x;
    output->rows[0].w = input->rows[0].w * x;
    output->rows[1].x = input->rows[1].x * y;
    output->rows[1].y = input->rows[1].y * y;
    output->rows[1].z = input->rows[1].z * y;
    output->rows[1].w = input->rows[1].w * y;
    output->rows[2].x = input->rows[2].x * z;
    output->rows[2].y = input->rows[2].y * z;
    output->rows[2].z = input->rows[2].z * z;
    output->rows[2].w = input->rows[2].w * z;
}

} /* extern "C" */
