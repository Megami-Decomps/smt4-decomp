/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023acdc` (_code @ 0x23acdc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_0023acdc(unsigned int param_1)

{
  unsigned char *pbVar1;
  
  if ((param_1 != 0) && (param_1 < 0x1f5)) {
    pbVar1 = (unsigned char *)(DAT_0057f69c + ((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3)
                     + 0x27ed8);
    *pbVar1 = *pbVar1 | (unsigned char)(1 << (((int)param_1 % 8) & 0xffU));
  }
  return;
}
