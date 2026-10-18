/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ac88` (_code @ 0x23ac88, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_0015555c; /* 0x15555c */


/* WARNING: Removing unreachable block (ram,0x0023ad44) */
/* WARNING: Removing unreachable block (ram,0x0023ad98) */

void FUN_0023ac88(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  *(unsigned int *)(param_1 + 0x2c) = 5;
  if (*(int *)(param_1 + 8) != 0) {
    *(unsigned char *)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 0x1f6) = 0;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 4) + 0x1f6) = 0;
    *(unsigned char *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x24) + 8) + 0x1f6) = 1;
  }
  temp_v0 = *(int *)(param_1 + 0x14);
  temp_v2 = 0x3f800000;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0x14);
    *(unsigned char **)(temp_v0 + 0x4c) = &LAB_0015555c;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  temp_v0 = *(int *)(param_1 + 0x20);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x44);
    (**(romwright_code **)(temp_v0 + 0x4c))(*(unsigned int *)(temp_v0 + 0x50));
    *(unsigned int *)(temp_v0 + 0x3c) = *(unsigned int *)(temp_v0 + 0x38);
    *(unsigned int *)(temp_v0 + 0x38) = temp_v1;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x20) + 0x40) = temp_v2;
    temp_v0 = *(int *)(param_1 + 0x20);
    *(unsigned char **)(temp_v0 + 0x4c) = &LAB_0015555c;
    *(unsigned char *)(temp_v0 + 0x58) = 1;
  }
  return;
}
