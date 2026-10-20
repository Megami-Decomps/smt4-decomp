/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002159f8` (_code @ 0x2159f8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


void FUN_002159f8(int param_1,unsigned char param_2)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)(param_1 + (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27f40);
  *pbVar1 = *pbVar1 & ~param_2;
  return;
}

} /* extern "C" */
