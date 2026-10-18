/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d348` (_code @ 0x23d348, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0023d348(int param_1,int param_2)

{
  unsigned int temp_v0;
  
  if (param_2 < (int)(unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x10) + 4)) {
    temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x14) + param_2 * 0x20 + 0x18);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
