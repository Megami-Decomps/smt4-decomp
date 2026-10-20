/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003391d0` (_code @ 0x3391d0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003391d0(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = *(int *)(param_1 + temp_v0 * 4 + 0x2134), temp_v1 == 0 ||
         (*(int *)(temp_v1 + 4) != param_2))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x2a) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
