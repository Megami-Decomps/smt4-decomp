/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9024` (_code @ 0x4f9024, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_003c609c. */


void FUN_004f9024(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_003c609c(param_3,param_2,param_4 != 0,param_5);
  *(unsigned int *)(param_1 + 0x1f54) = temp_v0;
  temp_v0 = FUN_003c609c(param_3,param_2,0,param_5);
  *(unsigned int *)(param_1 + 0x1f58) = temp_v0;
  return;
}
