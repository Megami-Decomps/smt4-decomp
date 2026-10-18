/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad8b4` (_code @ 0x2ad8b4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002ad8b4(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  return;
}
