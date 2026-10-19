/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8c80` (_code @ 0x3f8c80, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


unsigned int FUN_003f8c80(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = in_s0 / *(float *)(param_1 + 8) + 0.5f;
  hardfp_floorf();
  temp_v1 = VectorFloatToUnsigned(temp_v0,3);
  puVar2 = (unsigned int *)(param_1 + 10);
  if ((*(unsigned int *)(param_1 + 10) & 0xfff) <= temp_v1) {
    puVar2 = (unsigned int *)(param_1 + (unsigned int)*param_1 * 2 + 8);
    if (temp_v1 < (*puVar2 & 0xfff)) {
      temp_v0 = (float)VectorSignedToFloat(*param_1 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(*(float *)(param_1 + 2) * temp_v0 * in_s0,3);
      puVar2 = (unsigned int *)(param_1 + temp_v2 * 2 + 10);
      puVar1 = puVar2;
      if (temp_v1 < (*puVar2 & 0xfff)) {
        do {
          puVar2 = puVar2 + -1;
        } while (temp_v1 < (*puVar2 & 0xfff));
      }
      else {
        do {
          puVar2 = puVar1;
          puVar1 = puVar2 + 1;
        } while ((puVar2[1] & 0xfff) <= temp_v1);
      }
    }
  }
  VectorUnsignedToFloat(*puVar2 >> 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  return *puVar2 >> 0xc;
}
