/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389cb4` (_code @ 0x389cb4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005702f8; /* 0x5702f8 */


unsigned int FUN_00389cb4(int param_1)

{
  unsigned int temp_v0;
  
  if ((DAT_005702f8 - param_1) - 1 < 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 * 0x148 + 0x5c6024);
  }
  return temp_v0;
}
