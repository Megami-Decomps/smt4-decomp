/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6ed2` (_code @ 0x2f6ed2, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002f6ed2(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
