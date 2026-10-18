/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a844` (_code @ 0x40a844, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_0037d494(void);


void FUN_0040a844(unsigned int param_1,char param_2)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0037d494();
  *pbVar1 = (*pbVar1 & 0xfb) | (param_2 << 2);
  return;
}
