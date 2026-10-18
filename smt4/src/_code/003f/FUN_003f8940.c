/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8940` (_code @ 0x3f8940, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: hardfp_floorf. */


unsigned short * FUN_003f8940(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = in_s0 / *(float *)(param_1 + 8) + 0.5f;
  hardfp_floorf();
  temp_v1 = VectorFloatToUnsigned(temp_v0,3);
  puVar1 = param_1 + 10;
  if ((unsigned char)param_1[10] <= temp_v1) {
    puVar1 = param_1 + (unsigned int)*param_1 * 3 + 7;
    if (temp_v1 < (unsigned char)*puVar1) {
      temp_v0 = (float)VectorSignedToFloat(*param_1 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v2 = VectorFloatToUnsigned(*(float *)(param_1 + 2) * temp_v0 * in_s0,3);
      puVar1 = param_1 + temp_v2 * 3 + 10;
      if ((unsigned char)*puVar1 <= temp_v1) {
        do {
          puVar2 = puVar1;
          puVar1 = puVar2 + 3;
        } while ((unsigned char)*puVar1 <= temp_v1);
        return puVar2;
      }
      do {
        puVar1 = puVar1 + -3;
      } while (temp_v1 < (unsigned char)*puVar1);
    }
  }
  return puVar1;
}
