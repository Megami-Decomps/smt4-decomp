/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00284140` (_code @ 0x284140, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f24c; /* 0x57f24c */


unsigned char FUN_00284140(int param_1)

{
  unsigned char temp_v0;
  
  if (*(short *)(DAT_0057f24c + 0x64e) == param_1) {
    temp_v0 = *(unsigned char *)(DAT_0057f24c + 8);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
