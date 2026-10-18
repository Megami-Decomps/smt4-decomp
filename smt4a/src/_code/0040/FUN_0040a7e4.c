/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a7e4` (_code @ 0x40a7e4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_0037d494(void);


unsigned char FUN_0040a7e4(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0037d494();
  return *pbVar1 & 1;
}
