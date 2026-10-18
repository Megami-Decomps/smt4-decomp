/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00375b90` (_code @ 0x375b90, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

int * FUN_00375b90(int *param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  
  *param_1 = param_2;
  param_1[0x16] = param_1[0x15];
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    param_2 = param_1[0x15];
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[0x10];
  temp_v0 = param_1[0x11];
  param_1[0x12] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0x11];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[0xc];
  temp_v0 = param_1[0xd];
  param_1[0xe] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[0xd];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[8];
  temp_v0 = param_1[9];
  param_1[10] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[9];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[3];
  temp_v0 = param_1[4];
  param_1[5] = temp_v0;
  if (piVar1 != (int *)0x0) {
    temp_v0 = param_1[4];
  }
  if (piVar1 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
