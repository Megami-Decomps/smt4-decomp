/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea084` (_code @ 0x3ea084, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003ea084(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  piVar1 = param_2 + 3;
  if (*param_2 != 0x20000000) {
    if (*param_2 == 0x40000000) {
      temp_v1 = *param_3;
      switch(*(unsigned int *)(*param_1 + 0x14)) {
      case 0:
        param_2[1] = temp_v1;
        return;
      case 1:
        param_2[2] = temp_v1;
        return;
      case 3:
        *piVar1 = temp_v1;
        param_2[6] = param_2[6];
        param_2[4] = param_2[4];
        param_2[5] = param_2[5];
        return;
      case 4:
        *piVar1 = param_2[3];
        param_2[4] = temp_v1;
        param_2[5] = param_2[5];
        param_2[6] = param_2[6];
        return;
      case 5:
        temp_v0 = param_3[1];
        param_2[5] = temp_v1;
        param_2[6] = temp_v0;
        *piVar1 = param_2[3];
        param_2[4] = param_2[4];
        return;
      }
    }
  }
  else {
    temp_v0 = *(int *)(*param_1 + 0x14);
    temp_v1 = *param_3;
    if (temp_v0 == 0) {
      param_2[1] = temp_v1;
    }
    else if (temp_v0 == 1) {
      param_2[2] = temp_v1;
    }
    else {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          param_2[3] = temp_v1;
        }
        return;
      }
      param_2[4] = temp_v1;
    }
  }
  return;
}
