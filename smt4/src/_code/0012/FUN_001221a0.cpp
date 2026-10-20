/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001221a0` (_code @ 0x1221a0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_001221a0(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x70) >= *(int *)(param_1 + 0x6c)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x70);
  }
  return temp_v0;
}

} /* extern "C" */
