/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461f64` (_code @ 0x461f64, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001d2384. */


void FUN_00461f64(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  if (param_2 == 0 || param_2 == 2) {
    FUN_001d2384();
    param_2 = temp_v1;
  }
  piVar1 = *(int **)(param_3 + 300);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 0x20))(piVar1,param_1);
    param_2 = temp_v2;
  }
  temp_v0 = *(int *)(param_3 + 0x130);
  temp_v4 = temp_v0 != param_1;
  if (temp_v4) {
    param_2 = *(int *)(temp_v0 + 0x1ac);
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x1ac);
    *(int *)(param_3 + 0x130) = temp_v0;
  }
  if (temp_v4 && param_2 != 0) {
    while (temp_v3 = *(int *)(temp_v0 + 0x1ac), temp_v3 != param_1) {
      temp_v0 = temp_v3;
      if (*(int *)(temp_v3 + 0x1ac) == 0) {
        return;
      }
    }
    *(unsigned int *)(temp_v0 + 0x1ac) = *(unsigned int *)(param_1 + 0x1ac);
  }
  return;
}
