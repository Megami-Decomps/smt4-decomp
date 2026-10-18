/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5e1c` (_code @ 0x4f5e1c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00335660. */


void FUN_004f5e1c(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00335660(param_3,param_2,param_4 != 0);
  *(unsigned int *)(param_1 + 0x1f54) = temp_v0;
  temp_v0 = FUN_00335660(param_3,param_2,0);
  *(unsigned int *)(param_1 + 0x1f58) = temp_v0;
  return;
}
