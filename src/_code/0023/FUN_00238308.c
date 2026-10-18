/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238308` (_code @ 0x238308, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00238308(int *param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *param_1;
  temp_v0 = (unsigned int)(param_2 - param_1[1]) >> 4;
  temp_v2 = param_3 + temp_v0;
  for (; temp_v0 < temp_v2; temp_v0 = temp_v0 + 1) {
    *(unsigned char *)(temp_v1 + temp_v0) = 0;
  }
  return;
}
