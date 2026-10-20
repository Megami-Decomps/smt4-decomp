/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b564c` (_code @ 0x1b564c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001bcea0(void);


unsigned int FUN_001b564c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_001bcea0();
  return *(unsigned int *)(temp_v0 + param_1 * 4);
}

} /* extern "C" */
