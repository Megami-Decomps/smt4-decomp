/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040a548` (_code @ 0x40a548, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001519ac(void);


void FUN_0040a548(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001519ac();
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  return;
}

} /* extern "C" */
