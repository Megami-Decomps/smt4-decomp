/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145e24` (_code @ 0x145e24, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001696f4(void);
/* Supplied declaration required: FUN_00187a84. */
/* Supplied declaration required: FUN_00187d90. */


void FUN_00145e24(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_2 == 0) {
    return;
  }
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v0 = FUN_001696f4();
  if (temp_v0 == 1) {
    temp_v0 = *(int *)(param_1 + 0x52c);
    if (temp_v0 == 0) {
      temp_v2 = param_2 + 0x248;
      temp_v1 = param_2 + 0x208;
      FUN_00187a84(param_1,temp_v2,temp_v1,param_1 + 0x534);
      FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
      *(int *)(param_1 + 0x6fc) = param_2;
      *(unsigned char *)(param_1 + 0x5f8) = 5;
      return;
    }
    if (temp_v0 == 1) {
      temp_v2 = param_2 + 0x2f8;
      temp_v1 = param_2 + 0x2b8;
      FUN_00187a84(param_1,temp_v2,temp_v1,param_1 + 0x534);
      FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
      *(int *)(param_1 + 0x6fc) = param_2;
      *(unsigned char *)(param_1 + 0x5f8) = 5;
      return;
    }
    if (temp_v0 != 2) {
      FUN_00187a84(param_1,temp_v2,temp_v1,param_1 + 0x534);
      FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
      *(int *)(param_1 + 0x6fc) = param_2;
      *(unsigned char *)(param_1 + 0x5f8) = 5;
      return;
    }
  }
  temp_v2 = param_2 + 0xa8;
  temp_v1 = param_2 + 0x68;
  FUN_00187a84(param_1,temp_v2,temp_v1,param_1 + 0x534);
  FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
  *(int *)(param_1 + 0x6fc) = param_2;
  *(unsigned char *)(param_1 + 0x5f8) = 5;
  return;
}
