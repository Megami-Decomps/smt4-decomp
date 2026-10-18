/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110d20` (_code @ 0x110d20, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char FUN_00110d20(int param_1,int param_2,unsigned int param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1c) = param_2;
    *(unsigned int *)(param_1 + 0x20) = param_3;
  }
  return param_2 != 0;
}
