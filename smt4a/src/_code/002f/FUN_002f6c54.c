/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6c54` (_code @ 0x2f6c54, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int * FUN_002f6c54(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0xc);
  *param_1 = *(unsigned int *)(param_2 + 8);
  param_1[1] = temp_v0;
  return param_1 + 2;
}
