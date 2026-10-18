/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024502c` (_code @ 0x24502c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0024502c(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + param_2 * 4 + 0x4a24);
  if ((temp_v0 == 4 || temp_v0 == 5) || (temp_v0 == 6)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
