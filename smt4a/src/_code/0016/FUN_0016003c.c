/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016003c` (_code @ 0x16003c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0016003c(int param_1)

{
  int temp_v0;
  
  if (*(int *)(param_1 + 0x74) >= *(int *)(param_1 + 0x70)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x74);
  }
  return temp_v0;
}
