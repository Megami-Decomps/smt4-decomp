/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1b98` (_code @ 0x2a1b98, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002a1b98(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *param_2;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  *param_1 = 0;
  param_1[3] = temp_v0;
  param_1[2] = temp_v1;
  param_1[1] = temp_v2;
  return;
}
