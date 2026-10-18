/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd690` (_code @ 0x3fd690, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_002840c4(void);


void FUN_003fd690(unsigned int param_1,char param_2)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840c4();
  *pbVar1 = (*pbVar1 & 0xfd) | (param_2 << 1);
  return;
}
