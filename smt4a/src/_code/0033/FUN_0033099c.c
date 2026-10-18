/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033099c` (_code @ 0x33099c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_0033099c(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f65c;
  *(unsigned char *)(DAT_0057f65c + 0x1040) = 1;
  *(unsigned char *)(temp_v0 + 0x1043) = 0;
  *(unsigned char *)(temp_v0 + 0x1044) = 0;
  *(unsigned char *)(temp_v0 + 0x1045) = 0;
  return;
}
