/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004154b8` (_code @ 0x4154b8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00341930(unsigned int);


unsigned char FUN_004154b8(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00341930(*(unsigned int *)(param_1 + 8));
  if (temp_v0 != 0) {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x3c) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x38) = 3;
  }
  return temp_v0 != 0;
}

} /* extern "C" */
