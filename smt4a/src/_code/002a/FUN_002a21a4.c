/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a21a4` (_code @ 0x2a21a4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00164a9c(void);


void FUN_002a21a4(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
  *(unsigned int *)(temp_v0 + 0x78) = 1;
  return;
}
