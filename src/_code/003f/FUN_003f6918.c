/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f6918` (_code @ 0x3f6918, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225c1c. */


void FUN_003f6918(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225c1c();
  if (temp_v0 == 0) {
    return;
  }
  temp_v1 = *(int *)(temp_v0 + 4);
  if (temp_v1 != 1) {
    if (temp_v1 == 2) {
      *param_3 = 1;
      param_3[1] = *(unsigned int *)(temp_v0 + 0x18);
      param_3[2] = *(unsigned int *)(temp_v0 + 0x1c);
      param_3[3] = *(unsigned int *)(temp_v0 + 0x20);
      return;
    }
    if (temp_v1 != 3) {
      if (temp_v1 != 4) {
        return;
      }
      *param_3 = 2;
      param_3[1] = *(unsigned int *)(temp_v0 + 0x18);
      return;
    }
  }
  *param_3 = 0;
  param_3[1] = *(unsigned int *)(temp_v0 + 0x18);
  param_3[3] = *(unsigned int *)(temp_v0 + 0x1c);
  param_3[4] = *(unsigned int *)(temp_v0 + 0x20);
  param_3[5] = *(unsigned int *)(temp_v0 + 0x24);
  param_3[6] = *(unsigned int *)(temp_v0 + 0x28);
  param_3[7] = *(unsigned int *)(temp_v0 + 0x2c);
  param_3[8] = *(unsigned int *)(temp_v0 + 0x30);
  if (*(int *)(temp_v0 + 4) != 3) {
    param_3[2] = 6;
    param_3[9] = 0;
  }
  else {
    param_3[2] = *(unsigned int *)(temp_v0 + 0x34);
    param_3[9] = *(unsigned int *)(temp_v0 + 0x38);
  }
  return;
}
