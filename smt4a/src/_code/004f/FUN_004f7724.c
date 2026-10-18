/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7724` (_code @ 0x4f7724, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0037eecc. */


void FUN_004f7724(int param_1,unsigned short param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_3;
  FUN_0037eecc(param_3,param_2,param_4 != 0);
  *(unsigned int *)(param_1 + 0x1f54) = temp_v0;
  FUN_0037eecc(param_3,param_2,0);
  *(unsigned int *)(param_1 + 0x1f58) = param_3;
  return;
}
