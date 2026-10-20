/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002854d8` (_code @ 0x2854d8, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


unsigned char FUN_002854d8(unsigned int param_1,char param_2)

{
  int temp_v0;
  
  if (param_1 < 0x501) {
    temp_v0 = DAT_0057f69c + param_1 * 0x50;
    *(unsigned char *)(temp_v0 + 0x5f22) = (*(unsigned char *)(temp_v0 + 0x5f22) & 0xfd) | (param_2 << 1);
  }
  return param_1 < 0x501;
}

} /* extern "C" */
