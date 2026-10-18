/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd6b0` (_code @ 0x3fd6b0, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char *FUN_002840c4(void);


void FUN_003fd6b0(void)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)FUN_002840c4();
  *pbVar1 = *pbVar1 | 3;
  return;
}
