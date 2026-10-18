/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012f4d0` (_code @ 0x12f4d0, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014150c(unsigned int);


void FUN_0012f4d0(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  *(unsigned int *)(param_1 + 4) = param_2;
  temp_v0 = FUN_0014150c(param_2);
  *(unsigned int *)(param_1 + 0x108) = temp_v0;
  return;
}
