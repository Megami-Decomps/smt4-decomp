#include "shard/W5_W5Match2_PlainData.h"
#include "code/Code0028_Smt4a.h"

extern "C" {

/* Multiplies two affine matrices: `out` = `a` * `b` (3x3 part and translation row). */
void matrix43Multiply(Matrix44 *out, const Matrix44 *a, const Matrix44 *b)
{
    out->values[0] = a->values[0] * b->values[0] + a->values[1] * b->values[4] + a->values[2] * b->values[8];
    out->values[1] = a->values[0] * b->values[1] + a->values[1] * b->values[5] + a->values[2] * b->values[9];
    out->values[2] = a->values[0] * b->values[2] + a->values[1] * b->values[6] + a->values[2] * b->values[10];
    out->values[4] = a->values[4] * b->values[0] + a->values[5] * b->values[4] + a->values[6] * b->values[8];
    out->values[5] = a->values[4] * b->values[1] + a->values[5] * b->values[5] + a->values[6] * b->values[9];
    out->values[6] = a->values[4] * b->values[2] + a->values[5] * b->values[6] + a->values[6] * b->values[10];
    out->values[8] = a->values[8] * b->values[0] + a->values[9] * b->values[4] + a->values[10] * b->values[8];
    out->values[9] = a->values[8] * b->values[1] + a->values[9] * b->values[5] + a->values[10] * b->values[9];
    out->values[10] = a->values[8] * b->values[2] + a->values[9] * b->values[6] + a->values[10] * b->values[10];
    out->values[12] = b->values[12] + a->values[12] * b->values[0] + a->values[13] * b->values[4] + a->values[14] * b->values[8];
    out->values[13] = b->values[13] + a->values[12] * b->values[1] + a->values[13] * b->values[5] + a->values[14] * b->values[9];
    out->values[14] = b->values[14] + a->values[12] * b->values[2] + a->values[13] * b->values[6] + a->values[14] * b->values[10];
}

} /* extern "C" */
