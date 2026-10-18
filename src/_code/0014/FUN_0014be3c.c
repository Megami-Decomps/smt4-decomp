/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014be3c` (_code @ 0x14be3c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0014be3c(int *param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = param_1[10];
  if ((param_2 <= temp_v0) && (temp_v0 = param_2, param_2 < 0)) {
    temp_v0 = 0;
  }
  param_1[9] = temp_v0;
  while (param_1[9] < *param_1) {
    (**(romwright_code **)(*(int *)(param_1[4] - 0xe4) + 0x10))();
  }
  return;
}
