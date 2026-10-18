/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051eb6c` (_code @ 0x51eb6c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: nn_math_ARMv6_HermiteC_FAST. */


void FUN_0051eb6c(unsigned short *param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float *pfVar3;
  float *pfVar4;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v3;
  float temp_v4;
  
  temp_v2 = (unsigned int)*param_1;
  pfVar4 = (float *)(param_1 + 4);
  if (*(float *)(param_1 + 4) <= in_s0) {
    pfVar4 = (float *)(param_1 + (temp_v2 * 8 - 4));
    temp_v0 = (in_fpscr & 0xfffffff) |
            ((unsigned int)(*(float *)(param_1 + (temp_v2 * 8 - 4)) == in_s0) << 0x1e) |
            ((unsigned int)(in_s0 <= *(float *)(param_1 + (temp_v2 * 8 - 4))) << 0x1d);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) {
      temp_v4 = (float)VectorSignedToFloat(temp_v2 - 1,(unsigned char)(temp_v0 >> 0x16) & 3);
      temp_v3 = VectorFloatToUnsigned(*(float *)(param_1 + 2) * temp_v4 * in_s0,3);
      pfVar4 = (float *)(param_1 + temp_v3 * 8 + 4);
      pfVar3 = pfVar4;
      if (*pfVar4 > in_s0) {
        do {
          pfVar4 = pfVar4 + -4;
        } while (in_s0 < *pfVar4);
      }
      else {
        do {
          pfVar4 = pfVar3;
          pfVar3 = pfVar4 + 4;
        } while (pfVar4[4] <= in_s0);
      }
    }
  }
  if (*pfVar4 != in_s0 && pfVar4 != (float *)(param_1 + (temp_v2 * 8 - 4))) {
    nn_math_ARMv6_HermiteC_FAST();
  }
  return;
}
