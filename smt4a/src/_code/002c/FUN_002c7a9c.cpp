/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7a9c` (_code @ 0x2c7a9c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_002c7a9c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  if (param_1 < 2) {
    temp_v0 = DAT_0057f69c + 0x88 + param_1 * 8;
    *(unsigned int *)(temp_v0 + 0x27e40) = param_2;
    *(unsigned int *)(temp_v0 + 0x27e44) = param_3;
  }
  return;
}

} /* extern "C" */
