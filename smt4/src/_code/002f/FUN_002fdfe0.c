/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdfe0` (_code @ 0x2fdfe0, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c08f0(void);


void FUN_002fdfe0(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  *(unsigned int *)(temp_v0 + 0x38) = param_2;
  return;
}
