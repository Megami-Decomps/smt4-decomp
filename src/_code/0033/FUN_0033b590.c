/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b590` (_code @ 0x33b590, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0033b590(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(unsigned int *)(param_1 + param_2 * 4 + 0x4a24);
  if ((temp_v0 < 2) || (temp_v0 == 2 || temp_v0 == 3)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}
