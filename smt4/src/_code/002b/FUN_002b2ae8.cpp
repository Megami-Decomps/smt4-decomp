/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2ae8` (_code @ 0x2b2ae8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002b2ae8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  *param_3 = *(unsigned int *)(temp_v0 + 0x58);
  param_3[1] = *(unsigned int *)(temp_v0 + 0x68);
  param_3[2] = *(unsigned int *)(temp_v0 + 0x78);
  return;
}

} /* extern "C" */
