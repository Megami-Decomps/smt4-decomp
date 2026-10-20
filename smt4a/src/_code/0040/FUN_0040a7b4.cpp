/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a7b4` (_code @ 0x40a7b4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_0037d494(void);


void FUN_0040a7b4(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_0037d494();
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

} /* extern "C" */
