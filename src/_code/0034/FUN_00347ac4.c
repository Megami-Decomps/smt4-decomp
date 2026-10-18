/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00347ac4` (_code @ 0x347ac4, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023e378(unsigned int);


unsigned char FUN_00347ac4(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0023e378(*(unsigned int *)(param_1 + 8));
  if (temp_v0 != 0) {
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x3c) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x40) = 1;
    *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x38) = 3;
  }
  return temp_v0 != 0;
}
