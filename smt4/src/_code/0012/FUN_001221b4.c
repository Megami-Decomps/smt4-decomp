/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001221b4` (_code @ 0x1221b4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_001221b4(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x80) >= *(int *)(param_1 + 0x7c)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x80);
  }
  return temp_v0;
}
