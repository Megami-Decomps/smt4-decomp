/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034eda0` (_code @ 0x34eda0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0034eda0(int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = param_1 + param_2 * 4;
  *(unsigned char *)(param_1 + param_2 + 0x41b8) = 1;
  *(unsigned int *)(temp_v0 + 0x41c0) = 0;
  *(unsigned int *)(temp_v0 + 0x41d4) = param_3;
  return;
}

} /* extern "C" */
