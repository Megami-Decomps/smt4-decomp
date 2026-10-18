/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2db4` (_code @ 0x2a2db4, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002a2db4(unsigned int *param_1,int *param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(*param_2 + 4);
  if (temp_v0 != 0) {
    temp_v0 = *param_2 + 4 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = *(unsigned int *)(temp_v0 + 0x48);
  param_1[1] = temp_v0 + 0x10;
  *param_1 = temp_v1;
  return;
}
