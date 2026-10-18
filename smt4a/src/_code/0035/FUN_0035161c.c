/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035161c` (_code @ 0x35161c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001acf08(void);


void FUN_0035161c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001acf08();
  *(int *)(param_1 + 0x2c) = temp_v0 + *(int *)(param_1 + 0x2c);
  return;
}
