/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db608` (_code @ 0x1db608, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001db608(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 >= 4) {
    puVar1 = param_1 + -1;
    if ((int)(param_2 * 0x20000000) < 0) {
      *param_1 = 0;
      puVar1 = param_1;
    }
    for (param_2 = param_2 >> 3; param_2 != 0; param_2 = param_2 - 1) {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
    }
  }
  return;
}
