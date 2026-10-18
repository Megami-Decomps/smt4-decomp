/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e03c` (_code @ 0x15e03c, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c5ff4. */


void FUN_0015e03c(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002c5ff4(*param_1 + param_1[3] * 4,param_2,param_3 << 2);
  temp_v0 = param_1[3];
  param_1[3] = temp_v0 + param_3;
  if (param_1[1] <= temp_v0 + param_3) {
    param_1[3] = 0;
  }
  return;
}
