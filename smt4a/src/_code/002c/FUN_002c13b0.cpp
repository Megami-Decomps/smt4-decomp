/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c13b0` (_code @ 0x2c13b0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f56c; /* 0x57f56c */


void FUN_002c13b0(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned int *)(DAT_0057f56c + 0x14) = 3;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned char *)(temp_v0 + 0x2b1) = 0;
  return;
}

} /* extern "C" */
