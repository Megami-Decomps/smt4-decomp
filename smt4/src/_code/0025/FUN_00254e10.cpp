/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254e10` (_code @ 0x254e10, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameGetMapBlock(void);


int FUN_00254e10(int param_1)

{
  int temp_v0;
  
  temp_v0 = gameGetMapBlock();
  return (int)*(char *)(temp_v0 + param_1 + 0xe14);
}

} /* extern "C" */
