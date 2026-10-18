/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ec8e4` (_code @ 0x1ec8e4, 0x180 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */
extern int DAT_004e3cf8; /* 0x4e3cf8 */

/* Supplied declaration required: FUN_002d782c. */


/* WARNING: Removing unreachable block (ram,0x001ec9c8) */
/* WARNING: Removing unreachable block (ram,0x001eca2c) */
/* WARNING: Removing unreachable block (ram,0x001ec9b0) */

void FUN_001ec8e4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_004e3cf8;
  temp_v3 = DAT_004e3cf4;
  piVar3 = (int *)(DAT_004e3cf4 + (param_1 >> 0x14) * 8);
  if (param_3 == 0) {
    for (temp_v3 = *piVar3; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0x4c)) {
      if (*(unsigned int *)(temp_v3 + 0x24) == (param_1 & 0xfffff)) {
        *(unsigned int *)(temp_v3 + 0x1c) = *(unsigned int *)(temp_v3 + 0x1c) & ~(param_2 & 0xffffff0);
        return;
      }
    }
    temp_v3 = 0;
    *(unsigned int *)(temp_v3 + 0x1c) = *(unsigned int *)(temp_v3 + 0x1c) & ~(param_2 & 0xffffff0);
    return;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      for (temp_v3 = *piVar3; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0x4c)) {
        if (*(unsigned int *)(temp_v3 + 0x24) == (param_1 & 0xfffff)) goto LAB_001eca20;
      }
      temp_v3 = 0;
LAB_001eca20:
      *(unsigned int *)(temp_v3 + 0x1c) = *(unsigned int *)(temp_v3 + 0x1c) & ~(param_2 & 0xffffff0);
      temp_v3 = *(int *)(temp_v3 + 0x58);
      if (temp_v3 == 0) {
        return;
      }
      do {
        FUN_002d782c(0,*(unsigned int *)(temp_v3 + 0x28),param_2);
        temp_v3 = *(int *)(temp_v3 + 0x5c);
      } while (temp_v3 != 0);
      return;
    }
    if (param_3 != 3) {
      return;
    }
  }
  temp_v2 = 0;
  if (DAT_004e3cf8 < 1) {
    return;
  }
  do {
    for (temp_v1 = *(int *)(temp_v3 + temp_v2 * 8); temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 0x4c)) {
      if (((*(unsigned int *)(temp_v1 + 0x28) != param_1) && (param_3 == 1)) || (param_3 == 3)) {
        *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x1c) & ~(param_2 & 0xffffff0);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < temp_v0);
  return;
}
