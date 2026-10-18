/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c9b38` (_code @ 0x4c9b38, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_004c9b38(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x50);
  if ((((temp_v1 & 1) == 0 || (temp_v1 & 0x80) == 0) || ((temp_v1 & 2) != 0)) ||
     (temp_v0 = 0, (*(unsigned int *)(param_1 + 0x58) & 4) != 0)) {
    temp_v0 = 1;
  }
  return temp_v0;
}
