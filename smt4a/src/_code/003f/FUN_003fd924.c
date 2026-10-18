/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fd924` (_code @ 0x3fd924, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00193c08. */
/* Supplied declaration required: FUN_0045aca8. */


void FUN_003fd924(int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  float in_s1;
  
  if (*(int *)(param_1 + 0x20c) == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x20c) + 0xc;
  }
  if ((param_2 < *(unsigned short *)(*(int *)(temp_v0 + 0x30) + 100)) &&
     (temp_v0 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x60) + param_2 * 4), temp_v0 != 0)) {
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x1c) ^ 1;
    FUN_00193c08(*(unsigned int *)(param_1 + 0x210),*(unsigned int *)(param_1 + 0x108));
    temp_v1 = param_1 + *(int *)(param_1 + 0x1c) * 0x30;
    *(unsigned int *)(temp_v1 + 0x24) = param_2;
    *(unsigned int *)(temp_v1 + 0x28) = in_s0;
    *(unsigned int *)(temp_v1 + 0x2c) = in_s0;
    *(int *)(temp_v1 + 0x30) = temp_v0;
    FUN_0045aca8(temp_v1 + 0x38,temp_v0,*(unsigned int *)(param_1 + 0x210));
    *(unsigned char *)(temp_v1 + 0x44) = param_3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(float *)(param_1 + 0x14) = in_s1;
    if ((in_s1 > 0.0f) && (*(int *)(param_1 + (*(unsigned int *)(param_1 + 0x1c) ^ 1) * 0x30 + 0x30) != 0)) {
      *(unsigned char *)(param_1 + 0x20) = 1;
    }
    else {
      *(unsigned char *)(param_1 + 0x20) = 0;
    }
  }
  return;
}
