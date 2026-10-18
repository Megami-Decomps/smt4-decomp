/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398004` (_code @ 0x398004, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00162e8c(void);


void FUN_00398004(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00162e8c();
  *(unsigned char *)(temp_v0 + 0x1c) = param_1 != 0;
  return;
}
