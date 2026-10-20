/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018a4d0` (_code @ 0x18a4d0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


int FUN_0018a4d0(int param_1,unsigned int param_2)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x18) + param_1 + 8;
  if (((-1 < (int)param_2) && (param_2 < *(unsigned int *)(temp_v0 + 0x14))) &&
     (temp_v0 = *(int *)(temp_v0 + param_2 * 8 + 0x1c) + temp_v0, temp_v0 != -0x14)) {
    return *(int *)(param_1 + 0x24) + param_1 + 8 + *(int *)(temp_v0 + 0x18);
  }
  return 0;
}

} /* extern "C" */
