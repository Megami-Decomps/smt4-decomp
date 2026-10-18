/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8174` (_code @ 0x2f8174, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002f8174(int param_1,unsigned int *param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 4);
  param_2[2] = temp_v0;
  if (temp_v0 != 0) {
    *param_2 = *(unsigned int *)(temp_v0 + 0x14);
    param_2[1] = *(unsigned int *)(temp_v0 + 0x18);
  }
  return;
}
