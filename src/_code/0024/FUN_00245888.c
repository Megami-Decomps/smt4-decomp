/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245888` (_code @ 0x245888, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned int FUN_00245888(unsigned int param_1,unsigned short param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v1 = DAT_0043e2ac + param_1 * 0x34;
    *(unsigned short *)(temp_v1 + 0xc224) = param_2;
    if (param_2 >= 10000) {
      *(unsigned short *)(temp_v1 + 0xc224) = 9999;
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
