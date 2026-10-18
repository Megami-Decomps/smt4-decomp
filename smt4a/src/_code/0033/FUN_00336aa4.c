/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336aa4` (_code @ 0x336aa4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00336aa4(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x387c);
  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
