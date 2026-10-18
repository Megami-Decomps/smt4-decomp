/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fca0` (_code @ 0x26fca0, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c2b1c(void);


void FUN_0026fca0(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002c2b1c();
  *(unsigned int *)(temp_v0 + 0x18) = param_1;
  return;
}
