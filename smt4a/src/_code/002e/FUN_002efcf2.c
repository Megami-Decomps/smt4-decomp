/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efcf2` (_code @ 0x2efcf2, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int * FUN_002efcf2(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x104);
  *param_1 = *(unsigned int *)(param_2 + 0x100);
  param_1[1] = temp_v0;
  return param_1 + 2;
}
