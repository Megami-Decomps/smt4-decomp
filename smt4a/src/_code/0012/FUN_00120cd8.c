/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120cd8` (_code @ 0x120cd8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002eb60c(void);


void FUN_00120cd8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002eb60c();
  *(unsigned char *)(temp_v0 + 0xf) = 0;
  *(unsigned char *)(temp_v0 + 0x11) = 0;
  *(unsigned char *)(temp_v0 + 0x12) = 0;
  *(unsigned char *)(temp_v0 + 0x14) = 0;
  return;
}
