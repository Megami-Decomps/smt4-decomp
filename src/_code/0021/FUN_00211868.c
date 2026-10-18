/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211868` (_code @ 0x211868, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e0f8; /* 0x43e0f8 */


void FUN_00211868(unsigned short param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned int *)(DAT_0043e0f8 + 0x14) = 2;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned char *)(temp_v0 + 0x11) = param_2;
  return;
}
