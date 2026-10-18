/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd76c` (_code @ 0x3fd76c, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003fd76c(int param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  *(unsigned int *)(param_1 + 0x1bc) = param_2[2];
  *(unsigned int *)(param_1 + 0x1b4) = temp_v0;
  *(unsigned int *)(param_1 + 0x1b8) = temp_v1;
  return;
}
