/* NON_MATCHING: retail evaluates each row as (m1*y + m2*z) + (m3 + m0*x) with vmla and keeps two values in d8-d9; the float expression order is not yet reproduced */
#include "common.h"

extern "C" {

typedef struct Vec3f {
    /* 0x0 */ f32 x;
    /* 0x4 */ f32 y;
    /* 0x8 */ f32 z;
} Vec3f;

/* A row-major 4x4 matrix. */
typedef struct Mtx44 {
    /* 0x00 */ f32 m[4][4];
} Mtx44;

/* Transforms `count` points by a projective matrix, dividing each by its w. */
void FUN_0023b4f4(Vec3f *out, const Mtx44 *mtx, const Vec3f *in, u32 count)
{
    u32 i;

    for (i = 0; i < count; i++) {
        f32 x = in->x;
        f32 y = in->y;
        f32 z = in->z;
        f32 invW = 1.0f / (mtx->m[3][0] * x + mtx->m[3][1] * y + mtx->m[3][2] * z + mtx->m[3][3]);

        out->x = (mtx->m[0][0] * x + mtx->m[0][1] * y + mtx->m[0][2] * z + mtx->m[0][3]) * invW;
        out->y = (mtx->m[1][0] * x + mtx->m[1][1] * y + mtx->m[1][2] * z + mtx->m[1][3]) * invW;
        out->z = (mtx->m[2][0] * x + mtx->m[2][1] * y + mtx->m[2][2] * z + mtx->m[2][3]) * invW;
        in++;
        out++;
    }
}

} /* extern "C" */
