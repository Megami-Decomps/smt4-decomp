/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b26d4` (_code @ 0x2b26d4, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c415c. */


int FUN_002b26d4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  temp_v0 = *(int *)(param_2 + 0x18);
  if (param_1 != (int *)0x0 && param_2 != 0) {
    temp_v1 = *(int *)(param_2 + 0x14);
    if (temp_v1 == 0 && temp_v0 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      if (temp_v1 != 0) {
        *(int *)(temp_v1 + 0x18) = temp_v0;
      }
      else {
        *(unsigned int *)(temp_v0 + 0x14) = 0;
        *param_1 = temp_v0;
      }
      if (temp_v0 != 0) {
        *(int *)(temp_v0 + 0x14) = temp_v1;
      }
      else {
        *(unsigned int *)(temp_v1 + 0x18) = 0;
        param_1[1] = temp_v1;
      }
    }
    temp_v1 = 0;
    for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[6]) {
      *piVar2 = temp_v1;
      temp_v1 = temp_v1 + 1;
    }
    param_1[2] = temp_v1;
  }
  if (*(romwright_code **)(param_2 + 0x10) != (romwright_code *)0x0) {
    (**(romwright_code **)(param_2 + 0x10))(*(unsigned int *)(param_2 + 8));
  }
  FUN_002c415c(param_2);
  return temp_v0;
}
