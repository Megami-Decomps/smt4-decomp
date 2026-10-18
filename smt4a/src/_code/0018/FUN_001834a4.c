/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001834a4` (_code @ 0x1834a4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001861ac(void);


int FUN_001834a4(unsigned int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_001861ac();
  return **(int **)(temp_v0 + 4) + (param_2 % 1000) * 0x14;
}
