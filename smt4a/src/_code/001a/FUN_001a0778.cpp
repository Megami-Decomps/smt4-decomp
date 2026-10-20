/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a0778` (_code @ 0x1a0778, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int * FUN_001a0778(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  if (((param_2 & 0xf) != 0) && (temp_v1 = 4 - ((param_2 & 0xf) >> 2), 0 < (int)temp_v1)) {
    puVar1 = param_1 + -1;
    if ((temp_v1 & 1) != 0) {
      *param_1 = 0;
      puVar1 = param_1;
    }
    for (temp_v0 = (int)temp_v1 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
    param_1 = param_1 + temp_v1;
  }
  return param_1;
}

} /* extern "C" */
