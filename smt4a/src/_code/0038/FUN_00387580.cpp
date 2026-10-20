/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387580` (_code @ 0x387580, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_00387580(int param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  unsigned int temp_v0;
  
  temp_v0 = VectorFloatToUnsigned(in_s0 * 255.0f + 0.5f,3);
  return (unsigned int)(param_1 != 1) | (param_1 << 4) | ((temp_v0 & 0xff) << 8);
}

} /* extern "C" */
