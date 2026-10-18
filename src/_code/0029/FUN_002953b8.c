/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002953b8` (_code @ 0x2953b8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_002953b8(unsigned int param_1)

{
  unsigned char *pbVar1;
  
  if ((param_1 != 0) && (param_1 < 0x1f5)) {
    pbVar1 = (unsigned char *)(DAT_0043e2ac + ((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3)
                     + 0x24bc4);
    *pbVar1 = *pbVar1 | (unsigned char)(1 << (((int)param_1 % 8) & 0xffU));
  }
  return;
}
