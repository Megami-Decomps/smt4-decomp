/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bde20` (_code @ 0x1bde20, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_001bde20(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v0;
  
  temp_v0 = VectorFloatToUnsigned(in_s0 * 32.0f,3);
  VectorUnsignedToFloat(temp_v0 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
