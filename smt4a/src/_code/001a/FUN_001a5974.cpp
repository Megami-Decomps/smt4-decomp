/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5974` (_code @ 0x1a5974, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001a5974(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = param_1[0xd];
  if ((param_2 <= temp_v0) && (temp_v0 = param_2, param_2 < 0)) {
    temp_v0 = 0;
  }
  param_1[0xc] = temp_v0;
  while (param_1[0xc] < *param_1) {
    (**(romwright_code **)(*(int *)(param_1[4] - 0x108) + 0x10))();
  }
  return;
}

} /* extern "C" */
