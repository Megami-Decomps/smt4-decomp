/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228ab0` (_code @ 0x228ab0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


int FUN_00228ab0(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = (int)*(char *)(param_1 + DAT_0057f69c + 0x8c + 0x1ca0);
  if (-1 < temp_v1) {
    temp_v0 = DAT_0057f69c + 0x8c + temp_v1 * 300 + 0x68;
  }
  return temp_v0;
}
