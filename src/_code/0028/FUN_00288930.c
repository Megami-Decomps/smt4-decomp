/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288930` (_code @ 0x288930, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_00240e04(void);


unsigned int FUN_00288930(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_00240e04();
  return (*pbVar1 & 0x20) >> 5;
}
