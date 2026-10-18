/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002faf3c` (_code @ 0x2faf3c, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


unsigned int FUN_002faf3c(void)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  return *(unsigned int *)(temp_v0 + 0x18);
}
