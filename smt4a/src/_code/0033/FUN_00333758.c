/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333758` (_code @ 0x333758, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00333758(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5;
  if ((temp_v0 < 2) || (temp_v0 == 5 || temp_v0 == 6)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
