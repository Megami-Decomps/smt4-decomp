/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e1b0` (_code @ 0x37e1b0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00588fd4; /* 0x588fd4 */


void FUN_0037e1b0(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  *(char *)(DAT_00588fd4 + 0x137f) = (char)param_1;
  if (param_1 < 0) {
    *(unsigned char *)(temp_v0 + 0x1384) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x1384) = param_2;
  }
  return;
}

} /* extern "C" */
