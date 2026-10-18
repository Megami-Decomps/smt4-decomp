/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dd9f4` (_code @ 0x1dd9f4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned char FUN_001dd9f4(unsigned int param_1,char param_2)

{
  int temp_v0;
  
  if (param_1 < 0x501) {
    temp_v0 = DAT_0043e2ac + param_1 * 0x34;
    *(unsigned char *)(temp_v0 + 0xc20e) = (*(unsigned char *)(temp_v0 + 0xc20e) & 0xfd) | (param_2 << 1);
  }
  return param_1 < 0x501;
}
