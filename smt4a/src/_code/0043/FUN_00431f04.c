/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431f04` (_code @ 0x431f04, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00431f04(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  for (temp_v1 = *(int *)(param_1 + 0x3c); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0xc)) {
    temp_v0 = temp_v0 + *(int *)(temp_v1 + 4);
  }
  return temp_v0;
}
