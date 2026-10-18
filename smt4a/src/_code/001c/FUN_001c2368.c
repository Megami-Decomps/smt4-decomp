/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2368` (_code @ 0x1c2368, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001b6694. */


void FUN_001c2368(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  *(unsigned int *)(param_1 + 0x6c) = *param_2;
  *(unsigned char *)(param_1 + 0x70) = *(unsigned char *)(param_2 + 1);
  *(unsigned int *)(param_1 + 0x74) = param_2[2];
  temp_v0 = param_3[1];
  temp_v1 = param_3[2];
  temp_v2 = param_3[3];
  temp_v3 = param_3[4];
  temp_v4 = param_3[5];
  *(unsigned int *)(param_1 + 0xac) = *param_3;
  *(unsigned int *)(param_1 + 0xb0) = temp_v0;
  *(unsigned int *)(param_1 + 0xb4) = temp_v1;
  *(unsigned int *)(param_1 + 0xb8) = temp_v2;
  *(unsigned int *)(param_1 + 0xbc) = temp_v3;
  *(unsigned int *)(param_1 + 0xc0) = temp_v4;
  *(unsigned char *)(param_1 + 0xa0) = 1;
  temp_v0 = FUN_001b1f04();
  FUN_001b6694(temp_v0,param_1 + 0x50);
  *(unsigned char *)(param_1 + 0xa2) = 1;
  return;
}
