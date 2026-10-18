/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fc0a4` (_code @ 0x2fc0a4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002fc0a4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = *(int *)(param_1 + 0x3f8);
  }
  if ((param_1 != 0 && temp_v0 != 1) && (temp_v0 != 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
