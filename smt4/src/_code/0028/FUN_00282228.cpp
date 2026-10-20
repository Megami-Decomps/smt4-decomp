/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282228` (_code @ 0x282228, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);
int rt_memcpy_w(float *, unsigned int, int);

extern unsigned char DAT_004474f0; /* 0x4474f0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00282228(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  unsigned int in_fpscr;
  float temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_004474f0 + 0x4));
  pfVar2 = (float *)((*(int *)((unsigned char *)&DAT_004474f0 + 0x4)) + 0x220);
  rt_memcpy_w(pfVar2,param_1,0x70);
  *(float *)(temp_v0 + 0x250) = *pfVar2;
  *(unsigned int *)(temp_v0 + 0x254) = *(unsigned int *)(temp_v0 + 0x224);
  *(unsigned int *)(temp_v0 + 600) = *(unsigned int *)(temp_v0 + 0x228);
  *(unsigned int *)(temp_v0 + 0x270) = 0;
  *(unsigned int *)(temp_v0 + 0x25c) = *(unsigned int *)(temp_v0 + 0x22c);
  *(unsigned int *)(temp_v0 + 0x260) = *(unsigned int *)(temp_v0 + 0x230);
  *(unsigned int *)(temp_v0 + 0x264) = *(unsigned int *)(temp_v0 + 0x234);
  if (*(int *)(temp_v0 + 0x268) == 0) {
    temp_v1 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x26c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = 1.0f / temp_v1;
    *(float *)(temp_v0 + 0x274) = (*(float *)(temp_v0 + 0x238) - *pfVar2) * temp_v1;
    *(float *)(temp_v0 + 0x278) = (*(float *)(temp_v0 + 0x23c) - *(float *)(temp_v0 + 0x224)) * temp_v1;
    *(float *)(temp_v0 + 0x27c) = (*(float *)(temp_v0 + 0x240) - *(float *)(temp_v0 + 0x228)) * temp_v1;
    temp_v1 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x26c),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = 1.0f / temp_v1;
    *(float *)(temp_v0 + 0x280) = (*(float *)(temp_v0 + 0x244) - *(float *)(temp_v0 + 0x22c)) * temp_v1;
    *(float *)(temp_v0 + 0x284) = (*(float *)(temp_v0 + 0x248) - *(float *)(temp_v0 + 0x230)) * temp_v1;
    *(float *)(temp_v0 + 0x288) = (*(float *)(temp_v0 + 0x24c) - *(float *)(temp_v0 + 0x234)) * temp_v1;
  }
  return;
}

} /* extern "C" */
