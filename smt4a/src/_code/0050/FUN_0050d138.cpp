/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d138` (_code @ 0x50d138, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0050d138(unsigned int param_1,int *param_2,int param_3)

{
  int temp_v0;
  
  (**(romwright_code **)(*param_2 + 0x18))(param_2,param_3);
  temp_v0 = (**(romwright_code **)(*param_2 + 0x10))(param_2);
  if (temp_v0 != 0) {
    param_2[5] = *(int *)(param_3 + 0x14);
  }
  return;
}

} /* extern "C" */
