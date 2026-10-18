/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040792c` (_code @ 0x40792c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0040792c(int param_1,int param_2)

{
  int temp_v0;
  
  if (-1 < *(int *)(param_1 + 0x4c)) {
    temp_v0 = *(int *)(*(int *)(param_1 + *(int *)(param_1 + 0x4c) * 4 + 0x24) + 4);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) | 1;
  }
  *(int *)(param_1 + 0x4c) = param_2;
  if (-1 < param_2) {
    temp_v0 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x24) + 4);
    *(unsigned int *)(temp_v0 + 4) = *(unsigned int *)(temp_v0 + 4) & 0xfffffffe;
  }
  return;
}
