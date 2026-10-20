/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2d14` (_code @ 0x2a2d14, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003452f8(int, unsigned int, unsigned int);

extern int DAT_00640118; /* 0x640118 */
extern int DAT_0064011c; /* 0x64011c */

/* Supplied declaration required: FUN_003452f8. */


/* WARNING: Removing unreachable block (ram,0x002a2df8) */
/* WARNING: Removing unreachable block (ram,0x002a2e5c) */
/* WARNING: Removing unreachable block (ram,0x002a2de0) */

void FUN_002a2d14(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0064011c;
  temp_v3 = DAT_00640118;
  piVar3 = (int *)(DAT_00640118 + (param_1 >> 0x14) * 8);
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
        if (*(unsigned int *)(temp_v3 + 0x24) == (param_1 & 0xfffff)) goto LAB_002a2e50;
      }
      temp_v3 = 0;
LAB_002a2e50:
      *(unsigned int *)(temp_v3 + 0x1c) = *(unsigned int *)(temp_v3 + 0x1c) & ~(param_2 & 0xffffff0);
      temp_v3 = *(int *)(temp_v3 + 0x58);
      if (temp_v3 == 0) {
        return;
      }
      do {
        FUN_003452f8(0,*(unsigned int *)(temp_v3 + 0x28),param_2);
        temp_v3 = *(int *)(temp_v3 + 0x5c);
      } while (temp_v3 != 0);
      return;
    }
    if (param_3 != 3) {
      return;
    }
  }
  temp_v2 = 0;
  if (DAT_0064011c < 1) {
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

} /* extern "C" */
