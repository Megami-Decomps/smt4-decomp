/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a790` (_code @ 0x40a790, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_0037d494(void);


void FUN_0040a790(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0037d494();
  pbVar1[1] = 0;
  *pbVar1 = (*pbVar1 & 0xfb) | 3;
  return;
}

} /* extern "C" */
