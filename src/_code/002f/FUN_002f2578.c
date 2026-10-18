/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2578` (_code @ 0x2f2578, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_002f2578(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x3048);
  if ((temp_v0 == 0x22 || temp_v0 == 0x23) || (temp_v0 == 0x24 || temp_v0 == 0x25)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
