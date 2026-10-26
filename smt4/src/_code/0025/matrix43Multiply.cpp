#include "shard/W5_W5Match2_PlainData.h"

extern "C" {

/* dst = a * b for affine matrices: rotation rows times b's 3x3, translation row also gets b's translation added. */
void matrix43Multiply(Matrix44 *dst, const Matrix44 *a, const Matrix44 *b)
{
    dst->values[0] = a->values[0] * b->values[0] + a->values[1] * b->values[4] + a->values[2] * b->values[8];
    dst->values[1] = a->values[0] * b->values[1] + a->values[1] * b->values[5] + a->values[2] * b->values[9];
    dst->values[2] = a->values[0] * b->values[2] + a->values[1] * b->values[6] + a->values[2] * b->values[10];
    dst->values[4] = a->values[4] * b->values[0] + a->values[5] * b->values[4] + a->values[6] * b->values[8];
    dst->values[5] = a->values[4] * b->values[1] + a->values[5] * b->values[5] + a->values[6] * b->values[9];
    dst->values[6] = a->values[4] * b->values[2] + a->values[5] * b->values[6] + a->values[6] * b->values[10];
    dst->values[8] = a->values[8] * b->values[0] + a->values[9] * b->values[4] + a->values[10] * b->values[8];
    dst->values[9] = a->values[8] * b->values[1] + a->values[9] * b->values[5] + a->values[10] * b->values[9];
    dst->values[10] = a->values[8] * b->values[2] + a->values[9] * b->values[6] + a->values[10] * b->values[10];
    dst->values[12] = b->values[12] + a->values[12] * b->values[0] + a->values[13] * b->values[4] + a->values[14] * b->values[8];
    dst->values[13] = b->values[13] + a->values[12] * b->values[1] + a->values[13] * b->values[5] + a->values[14] * b->values[9];
    dst->values[14] = b->values[14] + a->values[12] * b->values[2] + a->values[13] * b->values[6] + a->values[14] * b->values[10];
}

} /* extern "C" */
