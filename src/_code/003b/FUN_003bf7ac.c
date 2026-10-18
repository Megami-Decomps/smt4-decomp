/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf7ac` (_code @ 0x3bf7ac, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_003bf7ac(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  
  if ((int)in_s0 < 0x3f800000) {
    temp_v0 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    param_1 = (int)(temp_v0 * in_s0);
  }
  return param_1;
}
