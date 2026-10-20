/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303504` (_code @ 0x303504, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005806a4; /* 0x5806a4 */


void FUN_00303504(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_005806a4;
  *(unsigned int *)(DAT_005806a4 + 0x20c) = param_1;
  *(unsigned char *)(temp_v0 + 0xb4) = 0;
  *(unsigned char *)(temp_v0 + 0xb5) = 0;
  *(unsigned short *)(temp_v0 + 0xb6) = 10;
  *(unsigned short *)(temp_v0 + 0xb8) = 0;
  *(unsigned int *)(temp_v0 + 0xbc) = 0;
  *(unsigned int *)(temp_v0 + 0xc0) = 0;
  *(unsigned int *)(temp_v0 + 0xc4) = 0x3f800000;
  return;
}

} /* extern "C" */
