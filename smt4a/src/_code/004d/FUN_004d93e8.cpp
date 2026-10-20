/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d93e8` (_code @ 0x4d93e8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_004d93e8(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x18))(param_1,param_4);
  param_1[4] = temp_v0;
  return;
}

} /* extern "C" */
