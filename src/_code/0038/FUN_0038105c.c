/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038105c` (_code @ 0x38105c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a30dc. */


void FUN_0038105c(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1, in_s2; 5 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float in_s1;
  float in_s2;
  
  temp_v0 = (in_s0 - in_s1) / (in_s2 - in_s1);
  FUN_002a30dc();
  VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
