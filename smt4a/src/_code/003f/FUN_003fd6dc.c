/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd6dc` (_code @ 0x3fd6dc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_002840c4(unsigned int);


void FUN_003fd6dc(void)

{
  unsigned char *pbVar1;
  unsigned int temp_v0;
  
  temp_v0 = 0;
  do {
    pbVar1 = (unsigned char *)FUN_002840c4(temp_v0 & 0xffff);
    temp_v0 = temp_v0 + 1;
    *pbVar1 = *pbVar1 & 0xfc;
  } while ((int)temp_v0 < 0x34);
  return;
}
