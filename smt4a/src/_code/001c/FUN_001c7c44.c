/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7c44` (_code @ 0x1c7c44, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c0ad8; /* 0x5c0ad8 */

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001b4a58. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_001c7c44(int param_1,int param_2)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int unaff_r4;
  int *piVar6;
  unsigned int in_lr;
  
  temp_v3 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_2 + 4) == 0) {
    *(unsigned char *)(param_2 + 0x11) = 3;
    return;
  }
  *(unsigned int *)(param_2 + 0x14) = 0;
  piVar6 = (int *)(temp_v3 + 0x70);
  *(unsigned char *)(param_2 + 0x11) = 1;
  nn_os_CriticalSection_Enter(piVar6);
  temp_v4 = *(int *)(temp_v3 + 0x30);
  if (temp_v4 == 0) {
    *(int *)(temp_v3 + 0x30) = param_2;
  }
  else {
    for (temp_v1 = *(int *)(temp_v4 + 0x14); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x14)) {
      temp_v4 = temp_v1;
    }
    *(int *)(temp_v4 + 0x14) = param_2;
  }
  temp_v2 = *(short *)(temp_v3 + 6);
  if (temp_v2 == 0) {
    temp_v2 = 1;
    *(unsigned short *)(temp_v3 + 6) = 1;
  }
  *(short *)(param_2 + 0x12) = temp_v2;
  *(short *)(temp_v3 + 6) = *(short *)(temp_v3 + 6) + 1;
  temp_v4 = *(int *)(temp_v3 + 0x78) - 1;
  *(int *)(temp_v3 + 0x78) = temp_v4;
  if (temp_v4 == 0) {
    *(unsigned int *)(temp_v3 + 0x74) = 0;
    do {
      temp_v4 = *piVar6;
      temp_v3 = -temp_v4;
      temp_v0 = (unsigned char)hasExclusiveAccess(piVar6);
    } while (!temp_v0);
    *piVar6 = temp_v3;
    if (temp_v4 != -1 && 0 < temp_v3) {
      FUN_001b4a58(DAT_005c0ad8,piVar6,0,1,0,0,unaff_r4,in_lr);
    }
    return;
  }
  return;
}
