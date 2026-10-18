/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029c6dc` (_code @ 0x29c6dc, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e190; /* 0x43e190 */


unsigned int FUN_0029c6dc(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e190;
  *(unsigned char *)(DAT_0043e190 + 0x7c) = 3;
  *(unsigned int *)(temp_v0 + 0x70) = param_1;
  *(unsigned int *)(temp_v0 + 0x74) = param_1;
  *(unsigned char *)(temp_v0 + 0x81) = param_2;
  *(unsigned int *)(temp_v0 + 100) = 0;
  return 1;
}
