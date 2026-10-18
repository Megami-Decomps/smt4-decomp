/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001844f8` (_code @ 0x1844f8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001844f8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  *param_3 = *(unsigned int *)(temp_v0 + 0x58);
  param_3[1] = *(unsigned int *)(temp_v0 + 0x68);
  param_3[2] = *(unsigned int *)(temp_v0 + 0x78);
  return;
}
