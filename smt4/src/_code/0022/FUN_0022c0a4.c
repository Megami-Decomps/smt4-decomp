/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c0a4` (_code @ 0x22c0a4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0022c0a4(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[2];
  if (puVar1 == (unsigned int *)0x0 || puVar1 == param_1) {
    if (param_1[1] != 0) {
      (**(romwright_code **)(*(int *)*param_1 + 4))();
    }
  }
  else {
    puVar1[3] = param_1[3];
    *(unsigned int *)(param_1[3] + 8) = param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return;
}
