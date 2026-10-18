/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002886c8` (_code @ 0x2886c8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_00240cd4(void);


unsigned int FUN_002886c8(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_00240cd4();
  return (*pbVar1 & 0x20) >> 5;
}
