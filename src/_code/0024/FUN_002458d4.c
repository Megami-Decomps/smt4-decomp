/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002458d4` (_code @ 0x2458d4, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned short FUN_002458d4(unsigned int param_1)

{
  unsigned short temp_v0;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned short *)(DAT_0043e2ac + param_1 * 0x34 + 0xc224);
  }
  return temp_v0;
}
