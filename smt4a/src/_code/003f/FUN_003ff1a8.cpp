/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff1a8` (_code @ 0x3ff1a8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_002840e0(int);


void FUN_003ff1a8(void)

{
  unsigned char *pbVar1;
  int temp_v0;
  
  temp_v0 = 0;
  do {
    pbVar1 = (unsigned char *)FUN_002840e0(temp_v0);
    temp_v0 = temp_v0 + 1;
    *pbVar1 = *pbVar1 & 0xf8;
  } while (temp_v0 < 100);
  return;
}

} /* extern "C" */
