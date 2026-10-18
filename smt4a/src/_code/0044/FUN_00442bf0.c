/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00442bf0` (_code @ 0x442bf0, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int * FUN_00442bf0(int *param_1)

{
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)*param_1;
  temp_v0 = param_1[1];
  param_1[2] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[1];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
