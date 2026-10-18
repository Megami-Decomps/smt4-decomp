/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7894` (_code @ 0x2d7894, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004e3cf4; /* 0x4e3cf4 */

/* Supplied declaration required: FUN_002d7894. */


void FUN_002d7894(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  for (temp_v0 = *(int *)(DAT_004e3cf4 + (param_2 >> 0x14) * 8); temp_v0 != 0;
      temp_v0 = *(int *)(temp_v0 + 0x4c)) {
    if (*(unsigned int *)(temp_v0 + 0x24) == (param_2 & 0xfffff)) goto LAB_002d78dc;
  }
  temp_v0 = 0;
LAB_002d78dc:
  if (param_1 != 0) {
    temp_v1 = (param_3 & 0xffffff0) | *(unsigned int *)(temp_v0 + 0x1c);
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v0 + 0x1c) & ~(param_3 & 0xffffff0);
  }
  *(unsigned int *)(temp_v0 + 0x1c) = temp_v1;
  for (temp_v0 = *(int *)(temp_v0 + 0x58); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x5c)) {
    FUN_002d7894(param_1,*(unsigned int *)(temp_v0 + 0x28),param_3);
  }
  return;
}
