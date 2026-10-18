/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014ce9c` (_code @ 0x14ce9c, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0014ce9c(unsigned int *param_1,int *param_2)

{
  if (*(int *)*param_1 == -0x80000000) {
    *param_2 = (((((((*param_2 + param_2[1]) - 1U) & ~(param_2[1] - 1U)) + param_2[1] + 0x4b) &
                 ~(param_2[1] - 1U)) + param_2[1] + 0x1f) & ~(param_2[1] - 1U)) + 0x20;
  }
  return;
}
