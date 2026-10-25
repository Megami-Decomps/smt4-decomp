/* NON_MATCHING: retail loads the matrix with `vldmia r1!, {s0-s15}` (base register written back); we emit `vldmia r1, {s0-s15}` */
#include "nw/math/MTX44.h"

extern "C" {

/* Rewrites a 4x4 matrix into `dst` with each row reversed and `value` stored in slot 1. */
void FUN_0023ae58(u32 *dst, const f32 *src, u32 value)
{
    nw::math::MTX44 m = *reinterpret_cast<const nw::math::MTX44 *>(src);
    f32 *matrix = reinterpret_cast<f32 *>(dst);
    dst[1] = value;
    matrix[4] = m.m[0][0]; matrix[3] = m.m[0][1]; matrix[2] = m.m[0][2]; matrix[0] = m.m[0][3];
    matrix[8] = m.m[1][0]; matrix[7] = m.m[1][1]; matrix[6] = m.m[1][2]; matrix[5] = m.m[1][3];
    matrix[12] = m.m[2][0]; matrix[11] = m.m[2][1]; matrix[10] = m.m[2][2]; matrix[9] = m.m[2][3];
    matrix[16] = m.m[3][0]; matrix[15] = m.m[3][1]; matrix[14] = m.m[3][2]; matrix[13] = m.m[3][3];
}

} /* extern "C" */
