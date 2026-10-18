/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001509b8` (_code @ 0x1509b8, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_0015459c. */
/* Supplied declaration required: FUN_002acd38. */


void FUN_001509b8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    FUN_0015459c();
    *(unsigned char *)(param_1 + 0x12) = 0;
  }
  temp_v0 = *(unsigned int *)(param_2 + 100);
  FUN_002acd38(DAT_004652a0,*(unsigned int *)(param_2 + 0x60));
  DAT_004652a0 = DAT_004652a0 + (temp_v0 & 0xfffffffc);
  FUN_002acd38(DAT_004652a0,param_2 + 0x30,0x30);
  DAT_004652a0 = DAT_004652a0 + 0x30;
  temp_v0 = *(unsigned int *)(param_2 + 0x2c);
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x14);
  if ((temp_v0 & 1) != 0) {
    temp_v1 = temp_v1 | 0x80;
  }
  else {
    temp_v1 = temp_v1 & 0xffffff7f;
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = temp_v1;
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x14);
  if ((temp_v0 & 2) != 0) {
    temp_v1 = temp_v1 | 0x100;
  }
  else {
    temp_v1 = temp_v1 & 0xfffffeff;
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = temp_v1;
  return;
}
