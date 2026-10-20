/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031052c` (_code @ 0x31052c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(int);

/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_0031052c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  nn_math_ARMv6_MTX34CopyAsm(temp_v0 + 0x4c);
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}

} /* extern "C" */
