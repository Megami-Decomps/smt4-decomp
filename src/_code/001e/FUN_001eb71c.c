/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb71c` (_code @ 0x1eb71c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0ac8(void);


void FUN_001eb71c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
  *(unsigned int *)(temp_v0 + 0x78) = 1;
  return;
}
