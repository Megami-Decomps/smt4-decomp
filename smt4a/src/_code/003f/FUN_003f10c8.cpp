/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f10c8` (_code @ 0x3f10c8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_003f10c8(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while ((temp_v1 = param_1 + temp_v0 * 4, *(int *)(temp_v1 + 0x4bc4) != param_2 &&
         (*(int *)(temp_v1 + 0x4bc8) != param_2))) {
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x2a) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
