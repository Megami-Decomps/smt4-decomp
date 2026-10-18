/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273610` (_code @ 0x273610, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e278; /* 0x43e278 */


void FUN_00273610(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = DAT_0043e278;
  *(unsigned char *)(DAT_0043e278 + 0xf9a) = 1;
  *(unsigned char *)(temp_v0 + 0xf9c) = 0;
  *(unsigned char *)(temp_v0 + 0xf9d) = 0;
  *(unsigned char *)(temp_v0 + 0xf9e) = 0;
  *(unsigned int *)(temp_v0 + 0xfd0) = 0;
  *(unsigned int *)(temp_v0 + 0xfd4) = param_1;
  return;
}
