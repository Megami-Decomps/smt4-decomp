/* NON_MATCHING: retail loads the matrix with `vldmia r1!, {s0-s15}` (base register written back); we emit `vldmia r1, {s0-s15}` */
#include "common.h"

extern "C" {

typedef struct Mtx4 { u32 v[16]; } Mtx4;

/* Rewrites a 4x4 matrix into `dst` with each row reversed and `value` stored in slot 1. */
void FUN_0023ae58(u32 *dst, const Mtx4 *src, u32 value)
{
    Mtx4 m = *src;
    dst[1] = value;
    dst[4] = m.v[0]; dst[3] = m.v[1]; dst[2] = m.v[2]; dst[0] = m.v[3];
    dst[8] = m.v[4]; dst[7] = m.v[5]; dst[6] = m.v[6]; dst[5] = m.v[7];
    dst[12] = m.v[8]; dst[11] = m.v[9]; dst[10] = m.v[10]; dst[9] = m.v[11];
    dst[16] = m.v[12]; dst[15] = m.v[13]; dst[14] = m.v[14]; dst[13] = m.v[15];
}

} /* extern "C" */
