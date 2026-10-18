/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025452c` (_code @ 0x25452c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


int FUN_0025452c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = (int)*(char *)(param_1 + DAT_0043e2ac + 0x8c + 0x9108);
  if (-1 < temp_v1) {
    temp_v0 = DAT_0043e2ac + 0x8c + temp_v1 * 0x604 + 0x90;
  }
  return temp_v0;
}
