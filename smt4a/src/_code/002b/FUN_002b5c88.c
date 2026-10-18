/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5c88` (_code @ 0x2b5c88, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


void FUN_002b5c88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned int *)(temp_v0 + 0xdf4) = 1;
  *(unsigned int *)(temp_v0 + 0xdf8) = 0;
  *(unsigned char *)(temp_v0 + 0xdfc) = 0;
  return;
}
