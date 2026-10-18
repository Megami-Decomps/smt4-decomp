/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151e5c` (_code @ 0x151e5c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00151e5c(int param_1)

{
  int temp_v0;
  
  if (*(short *)(param_1 + 0x14) == 0x6801) {
    temp_v0 = param_1 + 0x14;
  }
  else if (*(short *)(param_1 + 0x20) == 0x6801) {
    temp_v0 = param_1 + 0x20;
  }
  else {
    temp_v0 = 0;
  }
  return param_1 + *(int *)(temp_v0 + 4);
}
