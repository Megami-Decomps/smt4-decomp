/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255050` (_code @ 0x255050, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


int FUN_00255050(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  return (int)*(char *)(temp_v0 + param_1 + 0xe14);
}
