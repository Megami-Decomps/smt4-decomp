/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00362250` (_code @ 0x362250, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int * FUN_00362250(int *param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  *param_1 = param_2;
  param_1[8] = param_1[7];
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[7];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[2];
  temp_v0 = param_1[3];
  param_1[4] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[3];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
