/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f0f4` (_code @ 0x31f0f4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


unsigned int FUN_0031f0f4(unsigned int param_1,unsigned short param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = DAT_0057f69c + param_1 * 0x50;
    *(unsigned short *)(temp_v1 + 0x5f40) = param_2;
    if (param_2 >= 101) {
      *(unsigned short *)(temp_v1 + 0x5f40) = 100;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
