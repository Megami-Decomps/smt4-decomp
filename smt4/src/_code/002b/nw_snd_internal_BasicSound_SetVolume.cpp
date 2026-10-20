/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_BasicSound_SetVolume` (_code @ 0x2bcbb0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void nw_snd_internal_BasicSound_SetVolume(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    in_s0 = 0.0f;
  }
  temp_v1 = *(float *)(param_1 + 0xa4);
  if (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xa8)) {
    temp_v3 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xac),(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v2 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xa8),(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v1 = ((temp_v1 - *(float *)(param_1 + 0xa0)) * temp_v3) / temp_v2 + *(float *)(param_1 + 0xa0);
  }
  *(float *)(param_1 + 0xa0) = temp_v1;
  *(float *)(param_1 + 0xa4) = in_s0;
  *(unsigned int *)(param_1 + 0xa8) = param_2;
  *(unsigned int *)(param_1 + 0xac) = 0;
  return;
}

} /* extern "C" */
