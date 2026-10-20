/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037700c` (_code @ 0x37700c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int gameFlagsGetBlock(void);


unsigned int FUN_0037700c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagsGetBlock();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x158c);
  }
  return temp_v1;
}

} /* extern "C" */
