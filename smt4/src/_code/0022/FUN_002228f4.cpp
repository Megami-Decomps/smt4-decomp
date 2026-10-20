/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002228f4` (_code @ 0x2228f4, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */


unsigned int FUN_002228f4(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 >= 0x501) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (*(unsigned short *)(DAT_0043e2ac + param_1 * 0x34 + 0xc226) & 0xff) >> 2;
  }
  return temp_v0;
}

} /* extern "C" */
