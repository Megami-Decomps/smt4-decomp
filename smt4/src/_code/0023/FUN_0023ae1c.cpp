/* NON_MATCHING: retail loads the 12 floats with `vldmia r1!, {s0-s11}` (base written back); armcc writes `vldmia r1, {s0-s11}` here. */
#include "common.h"

extern "C" {

struct Block12 { f32 v[12]; };

/* Copies a 3x4 float block into `dst`, reversing each row of four; `count` is stored in dst[1]. */
void FUN_0023ae1c(f32 *dst, const Block12 *src, u32 count)
{
  Block12 m = *src;
  *(u32 *)&dst[1] = count;
  dst[4] = m.v[0]; dst[3] = m.v[1]; dst[2] = m.v[2]; dst[0] = m.v[3];
  dst[8] = m.v[4]; dst[7] = m.v[5]; dst[6] = m.v[6]; dst[5] = m.v[7];
  dst[12] = m.v[8]; dst[11] = m.v[9]; dst[10] = m.v[10]; dst[9] = m.v[11];
}

}
