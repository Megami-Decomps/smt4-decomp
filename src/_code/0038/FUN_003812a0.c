/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003812a0` (_code @ 0x3812a0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a337c. */


void FUN_003812a0(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 5 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float in_s1;
  float in_s2;
  
  temp_v0 = (in_s0 - in_s1) / (in_s2 - in_s1);
  FUN_002a337c();
  VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
