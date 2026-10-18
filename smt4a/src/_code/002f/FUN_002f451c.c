/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f451c` (_code @ 0x2f451c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int * FUN_002f451c(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x24);
  *param_1 = *(unsigned int *)(param_2 + 0x20);
  param_1[1] = temp_v0;
  return param_1 + 2;
}
