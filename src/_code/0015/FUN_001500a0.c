/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001500a0` (_code @ 0x1500a0, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00153a14. */


unsigned int FUN_001500a0(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  temp_v3 = (param_2 + 3U) & 0xfffffffc;
  temp_v0 = 0;
  if (param_3 >= 0) {
    temp_v1 = *(int *)(param_1 + 0x28);
    temp_v2 = ((temp_v1 + param_3) - 1U) & ~(param_3 - 1U);
    temp_v3 = temp_v2 + temp_v3;
    if (temp_v3 <= *(unsigned int *)(param_1 + 0x2c)) {
      FUN_00153a14(param_1,temp_v1,temp_v3 - temp_v1);
      *(unsigned int *)(param_1 + 0x28) = temp_v3;
      temp_v0 = temp_v2;
    }
  }
  else {
    temp_v3 = (*(int *)(param_1 + 0x2c) - temp_v3) & ~(0xffffffffU - param_3);
    if (*(unsigned int *)(param_1 + 0x28) <= temp_v3) {
      FUN_00153a14(param_1,temp_v3,*(int *)(param_1 + 0x2c) - temp_v3);
      *(unsigned int *)(param_1 + 0x2c) = temp_v3;
      temp_v0 = temp_v3;
    }
  }
  return temp_v0;
}
