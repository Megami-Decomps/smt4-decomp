/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253fe8` (_code @ 0x253fe8, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */


void FUN_00253fe8(unsigned int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4)

{
  int temp_v0;
  
  temp_v0 = DAT_0043da2c;
  *(unsigned int *)(DAT_0043da2c + 0x550) = param_1;
  *(unsigned char *)(temp_v0 + 0x554) = param_2;
  *(unsigned char *)(temp_v0 + 0x555) = param_3;
  *(unsigned char *)(temp_v0 + 0x556) = param_4;
  return;
}
