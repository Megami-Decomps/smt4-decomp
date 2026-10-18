/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00486304` (_code @ 0x486304, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00486304(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 4);
  if ((temp_v0 == 4 || temp_v0 == 6) || (temp_v0 == 0x10)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
