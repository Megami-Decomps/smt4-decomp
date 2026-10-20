/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324c78` (_code @ 0x324c78, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


int FUN_00324c78(int param_1)

{
  int temp_v0;
  
  temp_v0 = gameFlagsGetBlock();
  return (int)*(char *)(temp_v0 + param_1 + 0xe48);
}

} /* extern "C" */
