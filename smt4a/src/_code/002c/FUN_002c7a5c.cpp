/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7a5c` (_code @ 0x2c7a5c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned char FUN_002c7a5c(unsigned int param_1,short param_2)

{
  int temp_v0;
  
  if (param_1 < 0x501) {
    temp_v0 = (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + param_1 * 0x50;
    *(unsigned short *)(temp_v0 + 0x5f42) = (*(unsigned short *)(temp_v0 + 0x5f42) & 0xfffd) | (param_2 << 1);
  }
  return param_1 < 0x501;
}

} /* extern "C" */
