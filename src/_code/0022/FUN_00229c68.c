/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229c68` (_code @ 0x229c68, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043427c; /* 0x43427c */


void FUN_00229c68(int *param_1)

{
  unsigned char temp_v0;
  
  if ((*(unsigned int *)(*param_1 + 0x7c) & 1) == 0) {
    temp_v0 = 0xb;
  }
  else {
    temp_v0 = 10;
  }
  *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = temp_v0;
  return;
}
