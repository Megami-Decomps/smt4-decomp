/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff98c` (_code @ 0x4ff98c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004ff98c(int param_1)

{
  unsigned int temp_v0;
  
  param_1 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
  if (*(int *)(param_1 + 0x30) == 0) {
    temp_v0 = 0xffff;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 0x24);
  }
  return temp_v0;
}
