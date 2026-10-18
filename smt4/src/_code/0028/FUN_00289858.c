/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289858` (_code @ 0x289858, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00289858(int param_1,int param_2)

{
  int temp_v0;
  
  if ((param_2 >= 0) && (*(int *)(*(int *)(param_1 + 0xb0) + 8) > param_2)) {
    temp_v0 = *(int *)(param_1 + 0xb4) + param_2 * 0x20;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
