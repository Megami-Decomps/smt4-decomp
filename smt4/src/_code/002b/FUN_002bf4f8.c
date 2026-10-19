/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf4f8` (_code @ 0x2bf4f8, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002afef4(void);


int FUN_002bf4f8(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002afef4();
  return **(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14;
}
