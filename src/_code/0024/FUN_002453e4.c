/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002453e4` (_code @ 0x2453e4, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002453e4(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(unsigned int *)(param_1 + param_2 * 4 + 0x4a24);
  if ((temp_v0 < 2) || (temp_v0 == 2)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
