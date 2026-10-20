/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b0c0` (_code @ 0x24b0c0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0024b0c0(int param_1,int param_2)

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

} /* extern "C" */
