/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d794` (_code @ 0x50d794, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_0050d794(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = (param_2 & 0xff) | ((param_2 & 0xff) << 8);
  temp_v0 = temp_v0 | (temp_v0 << 0x10);
  *param_1 = temp_v0;
  param_1[1] = temp_v0;
  return;
}

} /* extern "C" */
