/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376fb8` (_code @ 0x376fb8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


void FUN_00376fb8(unsigned char param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned char *)(temp_v0 + 3) = param_1;
  return;
}
