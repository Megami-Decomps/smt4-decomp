/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de95c` (_code @ 0x2de95c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00269cb8(void);


void FUN_002de95c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00269cb8();
  *(int *)(param_1 + 0x2c) = temp_v0 + *(int *)(param_1 + 0x2c);
  return;
}
