/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409dd4` (_code @ 0x409dd4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00341930(unsigned int);


unsigned char FUN_00409dd4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00341930(*(unsigned int *)(param_1 + 8));
  if (temp_v0 != 0) {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x3c) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x38) = 2;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
