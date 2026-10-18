/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7f94` (_code @ 0x2a7f94, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * FUN_002a7f94(int *param_1)

{
  int temp_v0;
  
  param_1 = (int *)*param_1;
  if (*param_1 != -0x80000000) {
    if (*param_1 == 0x40000000) {
      temp_v0 = param_1[3];
      if (temp_v0 != 0) {
        return (int *)((int)(param_1 + 3) + temp_v0);
      }
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}
