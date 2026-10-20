#include "common.h"

extern "C" {

typedef struct Matrix43 {
    /* 0x00 */ f32 m[16];       /* rows of 4: three rotation rows (columns 0..2) and a translation row at 12 */
} Matrix43;

/* Multiplies two affine matrices: `out` = `a` * `b` (3x3 part and translation row). */
void matrix43Multiply(Matrix43 *out, Matrix43 *a, Matrix43 *b)
{
    out->m[0] = a->m[0] * b->m[0] + a->m[1] * b->m[4] + a->m[2] * b->m[8];
    out->m[1] = a->m[0] * b->m[1] + a->m[1] * b->m[5] + a->m[2] * b->m[9];
    out->m[2] = a->m[0] * b->m[2] + a->m[1] * b->m[6] + a->m[2] * b->m[10];
    out->m[4] = a->m[4] * b->m[0] + a->m[5] * b->m[4] + a->m[6] * b->m[8];
    out->m[5] = a->m[4] * b->m[1] + a->m[5] * b->m[5] + a->m[6] * b->m[9];
    out->m[6] = a->m[4] * b->m[2] + a->m[5] * b->m[6] + a->m[6] * b->m[10];
    out->m[8] = a->m[8] * b->m[0] + a->m[9] * b->m[4] + a->m[10] * b->m[8];
    out->m[9] = a->m[8] * b->m[1] + a->m[9] * b->m[5] + a->m[10] * b->m[9];
    out->m[10] = a->m[8] * b->m[2] + a->m[9] * b->m[6] + a->m[10] * b->m[10];
    out->m[12] = b->m[12] + a->m[12] * b->m[0] + a->m[13] * b->m[4] + a->m[14] * b->m[8];
    out->m[13] = b->m[13] + a->m[12] * b->m[1] + a->m[13] * b->m[5] + a->m[14] * b->m[9];
    out->m[14] = b->m[14] + a->m[12] * b->m[2] + a->m[13] * b->m[6] + a->m[14] * b->m[10];
}

} /* extern "C" */
