/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314bbc` (_code @ 0x314bbc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00587f0c; /* 0x587f0c */


void FUN_00314bbc(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_00587f0c;
  if (param_1 != 0) {
    *(int *)(DAT_00587f0c + 0x38) = param_1;
    *(unsigned int *)(temp_v0 + 0x3c) = param_2;
  }
  return;
}
