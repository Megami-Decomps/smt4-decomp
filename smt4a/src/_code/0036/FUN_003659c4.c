/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003659c4` (_code @ 0x3659c4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058103c; /* 0x58103c */


void FUN_003659c4(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  if (*(short *)(DAT_0058103c + 0xcce8) != 0) {
    *(unsigned short *)(DAT_0058103c + 0xcce8) = 3;
    *(unsigned short *)(temp_v0 + 0xccea) = 0;
  }
  return;
}
