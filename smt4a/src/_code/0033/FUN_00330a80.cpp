/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330a80` (_code @ 0x330a80, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */


int FUN_00330a80(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if (param_1 < 0x20) {
    temp_v0 = DAT_0057f69c + param_1 * 100 + 0x2720c;
  }
  return temp_v0;
}

} /* extern "C" */
