/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a854` (_code @ 0x37a854, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00164a9c(void);


void FUN_0037a854(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  *(unsigned int *)(temp_v0 + 0x7c) = param_2;
  *(unsigned int *)(temp_v0 + 0x80) = param_3;
  return;
}

} /* extern "C" */
