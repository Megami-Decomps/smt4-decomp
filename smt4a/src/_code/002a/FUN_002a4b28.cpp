/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b28` (_code @ 0x2a4b28, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


unsigned int FUN_002a4b28(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (*(unsigned short *)(DAT_0057f69c + param_1 * 0x50 + 0x5f42) & 2) >> 1;
  }
  return temp_v0;
}

} /* extern "C" */
