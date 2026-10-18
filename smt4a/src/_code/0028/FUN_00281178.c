/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281178` (_code @ 0x281178, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00640118; /* 0x640118 */


void FUN_00281178(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  for (temp_v0 = *(int *)(DAT_00640118 + (param_1 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_1 & 0xfffff)) goto LAB_002811b8;
  }
  temp_v0 = 0;
LAB_002811b8:
  temp_v2 = *(int *)(temp_v0 + 0x54);
  if (temp_v2 != 0) {
    temp_v1 = *(int *)(temp_v2 + 0x58);
    if (temp_v1 == temp_v0) {
      *(unsigned int *)(temp_v2 + 0x58) = *(unsigned int *)(temp_v0 + 0x5c);
    }
    else {
      for (temp_v2 = *(int *)(temp_v1 + 0x5c); temp_v2 != temp_v0; temp_v2 = *(int *)(temp_v2 + 0x5c)) {
        temp_v1 = temp_v2;
      }
      *(unsigned int *)(temp_v1 + 0x5c) = *(unsigned int *)(temp_v0 + 0x5c);
    }
    *(unsigned int *)(temp_v0 + 0x54) = 0;
    *(unsigned int *)(temp_v0 + 0x5c) = 0;
  }
  return;
}
