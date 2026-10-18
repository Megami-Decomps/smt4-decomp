/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027eb98` (_code @ 0x27eb98, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043427c; /* 0x43427c */


int FUN_0027eb98(int *param_1)

{
  int temp_v0;
  
  if (((*param_1 != 0) && (temp_v0 = *(int *)(*param_1 + 0x84), -1 < temp_v0)) && (temp_v0 < 4)) {
    return DAT_0043427c + temp_v0 * 0xf1c + 4;
  }
  return 0;
}
