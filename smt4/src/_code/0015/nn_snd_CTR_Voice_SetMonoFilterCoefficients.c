/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_snd_CTR_Voice_SetMonoFilterCoefficients` (_code @ 0x156420, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_002b7064. */


void nn_snd_CTR_Voice_SetMonoFilterCoefficients(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float temp_v1;
  
  if (param_2 >= 16001) {
    param_2 = 16000;
  }
  temp_v1 = (float)VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = temp_v1 * 0.008f;
  FUN_002b7064();
  temp_v1 = 2.0f - temp_v1;
  temp_v1 = romwright_sqrt_4(temp_v1 * temp_v1 - 1.0f) - temp_v1;
  *(short *)(param_1 + 8) = (short)(int)((temp_v1 + 1.0f) * 32768.0f);
  *(short *)(param_1 + 10) = -(short)(int)(temp_v1 * 32768.0f);
  temp_v0 = *(int *)(param_1 + 0x68);
  *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(param_1 + 8);
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 8;
  return;
}
