/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442c24` (_code @ 0x442c24, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int * FUN_00442c24(int *param_1,int param_2)

{
  int *piVar1;
  
  param_1[2] = param_1[1];
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[1];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
