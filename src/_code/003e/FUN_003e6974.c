/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6974` (_code @ 0x3e6974, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_003e6974(short *param_1)

{
  int temp_v0;
  
  if (*param_1 == 0x300) {
    temp_v0 = (int)param_1 + *(int *)(param_1 + 2);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
