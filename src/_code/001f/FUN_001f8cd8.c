/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f8cd8` (_code @ 0x1f8cd8, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_001f8cd8(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  *(unsigned int *)(temp_v0 + 0xdc0) = 1;
  *(unsigned int *)(temp_v0 + 0xdc4) = 0;
  *(unsigned char *)(temp_v0 + 0xdc8) = 0;
  return;
}
