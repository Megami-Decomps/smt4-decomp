/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff160` (_code @ 0x3ff160, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840e0(void);


void FUN_003ff160(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840e0();
  *pbVar1 = (*pbVar1 & 0xfb) | 3;
  return;
}

} /* extern "C" */
