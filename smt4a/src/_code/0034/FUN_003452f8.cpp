/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003452f8` (_code @ 0x3452f8, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00640118; /* 0x640118 */

/* Supplied declaration required: FUN_003452f8. */


void FUN_003452f8(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  for (temp_v0 = *(int *)(DAT_00640118 + (param_2 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_2 & 0xfffff)) goto LAB_00345340;
  }
  temp_v0 = 0;
LAB_00345340:
  if (param_1 != 0) {
    temp_v1 = (param_3 & 0xffffff0) | *(unsigned int *)(temp_v0 + 0x1c);
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x1c) & ~(param_3 & 0xffffff0);
  }
  *(unsigned int *)(temp_v0 + 0x1c) = temp_v1;
  for (temp_v0 = *(int *)(temp_v0 + 0x58); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x5c)) {
    FUN_003452f8(param_1,*(unsigned int *)(temp_v0 + 0x28),param_3);
  }
  return;
}

} /* extern "C" */
