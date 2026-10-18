/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5de4` (_code @ 0x4f5de4, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004f5de4(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = *(int *)(param_1 + temp_v0 * 0x28 + 400);
    if (temp_v1 != 0) {
      temp_v1 = *(int *)(temp_v1 + 4);
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 3;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x32);
  return;
}
