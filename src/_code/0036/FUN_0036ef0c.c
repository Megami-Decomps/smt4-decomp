/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036ef0c` (_code @ 0x36ef0c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0036ef0c(int *param_1)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  
  temp_v0 = *(int *)(*param_1 + 0x38);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x38 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  piVar3 = *(int **)(temp_v0 + 0x10);
  if (*param_1 != 0) {
    piVar2 = (int *)(*param_1 + 0x38);
    temp_v0 = *piVar2;
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 + (int)piVar2;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      if (*(int *)(temp_v0 + 0xc) != 0 && *(int *)(temp_v0 + 0xc) + temp_v0 + 0xc != 0) {
        (**(romwright_code **)(*piVar3 + 0xc))();
      }
      (**(romwright_code **)(*piVar3 + 0xc))(piVar3,temp_v0);
    }
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,*param_1);
    *param_1 = 0;
  }
  return;
}
