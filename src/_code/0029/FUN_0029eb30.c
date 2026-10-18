/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029eb30` (_code @ 0x29eb30, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e144; /* 0x44e144 */


void FUN_0029eb30(int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = DAT_0044e144;
  *(char *)(DAT_0044e144 + 0x12ef) = (char)param_1;
  if (param_1 < 0) {
    *(unsigned char *)(temp_v0 + 0x12f4) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x12f4) = param_2;
  }
  return;
}
