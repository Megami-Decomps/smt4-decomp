/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00286834` (_code @ 0x286834, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_00286834(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  unsigned int temp_v0;
  
  temp_v0 = VectorFloatToUnsigned(in_s0 * 255.0f + 0.5f,3);
  return (unsigned int)(param_1 != 1) | (param_1 << 4) | ((temp_v0 & 0xff) << 8);
}
