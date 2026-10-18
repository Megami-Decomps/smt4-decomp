/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145310` (_code @ 0x145310, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00145310(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = 0;
  piVar2 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x18) + 0x20);
  temp_v2 = *piVar2;
  if (temp_v2 != 0) {
    temp_v2 = (int)piVar2 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 == 0) {
    temp_v2 = 0;
  }
  else {
    piVar2 = (int *)(temp_v2 + param_2 * 0x10 + 0x28);
    temp_v2 = *piVar2;
    if (temp_v2 != 0) {
      temp_v2 = (int)piVar2 + temp_v2;
    }
    else {
      temp_v2 = 0;
    }
  }
  temp_v1 = *(int *)(temp_v2 + 200);
  if (temp_v1 != 0) {
    temp_v1 = temp_v2 + 200 + temp_v1;
  }
  else {
    temp_v1 = 0;
  }
  piVar2 = (int *)(temp_v1 + param_3 * 4);
  temp_v2 = *piVar2;
  if (temp_v2 != 0) {
    temp_v0 = temp_v2 + (int)piVar2;
  }
  return temp_v0;
}
