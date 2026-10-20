/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229fd0` (_code @ 0x229fd0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_00229fd0(int param_1,unsigned char param_2)

{
  unsigned char *pbVar1;
  
  pbVar1 = (unsigned char *)(param_1 + DAT_0057f69c + 0x27f40);
  *pbVar1 = param_2 | *pbVar1;
  return;
}

} /* extern "C" */
