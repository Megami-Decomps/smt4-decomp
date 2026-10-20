/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cd32c` (_code @ 0x1cd32c, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_001cd32c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = VectorFloatToUnsigned(param_1,3);
  return temp_v0;
}

} /* extern "C" */
