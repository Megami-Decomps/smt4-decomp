/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2610` (_code @ 0x2c2610, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f65c; /* 0x57f65c */


void FUN_002c2610(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0057f65c;
  *(unsigned char *)(DAT_0057f65c + 0x148c) = 1;
  *(unsigned char *)(temp_v0 + 0xfae) = 0;
  *(unsigned char *)(temp_v0 + 0xfad) = 0;
  return;
}

} /* extern "C" */
