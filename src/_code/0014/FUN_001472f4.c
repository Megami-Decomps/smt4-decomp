/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001472f4` (_code @ 0x1472f4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001472f4(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = param_2;
  if (param_2 < 0) {
    temp_v0 = 0;
  }
  *(int *)(param_1 + 0x18) = temp_v0;
  temp_v0 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(temp_v0 + 0x20) = param_2;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 2;
  return;
}
