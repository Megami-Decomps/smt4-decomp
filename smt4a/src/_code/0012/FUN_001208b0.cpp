/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001208b0` (_code @ 0x1208b0, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001208b0(int *param_1,int *param_2)

{
  int temp_v0;
  
  temp_v0 = param_2[1];
  param_1[0xc] = *param_2;
  param_1[0xd] = temp_v0;
  (**(romwright_code **)(*param_1 + 8))(param_1);
  if (*(char *)((int)param_1 + 0x22) == '\x04') {
    (**(romwright_code **)(*param_1 + 0x1c))(param_1);
  }
  param_1[10] = param_1[10] + 1;
  return;
}

} /* extern "C" */
