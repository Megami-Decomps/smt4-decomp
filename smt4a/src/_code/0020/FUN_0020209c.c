/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020209c` (_code @ 0x20209c, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0020209c(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v0 = *param_1;
  while (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 0x18);
    if (param_1 != (int *)0x0 && temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x14);
      if (temp_v2 == 0 && temp_v1 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
      }
      else {
        if (temp_v2 != 0) {
          *(int *)(temp_v2 + 0x18) = temp_v1;
        }
        else {
          *(unsigned int *)(temp_v1 + 0x14) = 0;
          *param_1 = temp_v1;
        }
        if (temp_v1 != 0) {
          *(int *)(temp_v1 + 0x14) = temp_v2;
        }
        else {
          *(unsigned int *)(temp_v2 + 0x18) = 0;
          param_1[1] = temp_v2;
        }
      }
      temp_v2 = 0;
      for (piVar3 = (int *)*param_1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[6]) {
        *piVar3 = temp_v2;
        temp_v2 = temp_v2 + 1;
      }
      param_1[2] = temp_v2;
    }
    if (*(romwright_code **)(temp_v0 + 0x10) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v0 + 0x10))(*(unsigned int *)(temp_v0 + 8));
    }
    FUN_0019a5a0(temp_v0);
    temp_v0 = temp_v1;
  }
  return;
}
