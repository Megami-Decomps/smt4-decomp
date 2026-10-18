/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024565c` (_code @ 0x24565c, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0024565c(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  *(unsigned char *)(param_1 + 2) = *(unsigned char *)(param_2 + 2);
  return;
}
