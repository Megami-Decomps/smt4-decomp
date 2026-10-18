/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227e08` (_code @ 0x227e08, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f230; /* 0x57f230 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_001add24. */
/* Supplied declaration required: FUN_002e132c. */
/* Supplied declaration required: FUN_003491e8. */


void FUN_00227e08(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f230;
  if (DAT_0057f230 != 0) {
    if (*(char *)(DAT_0057f230 + 0x4c1) != '\0') {
      FUN_0019a7f4(0x24);
      *(unsigned char *)(temp_v0 + 0x4c1) = 0;
    }
    if (*(char *)(temp_v0 + 0x4c0) != '\0') {
      FUN_002e132c(0x24);
      *(unsigned char *)(temp_v0 + 0x4c0) = 0;
    }
    FUN_001add24(0x36);
    temp_v1 = 0;
    if (temp_v1 < *(short *)(temp_v0 + 0x78)) {
      do {
        FUN_001641c4();
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(short *)(temp_v0 + 0x78));
    }
    FUN_003491e8();
    if (*(int *)(temp_v0 + 0x84) != 0) {
      FUN_0019c364();
      *(unsigned int *)(temp_v0 + 0x84) = 0;
    }
    if (*(int *)(temp_v0 + 0x7c) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x7c) = 0;
    }
    if (*(int *)(temp_v0 + 0x80) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0x80) = 0;
    }
    if (temp_v0 != 0) {
      FUN_0019a5a0(temp_v0);
      DAT_0057f230 = 0;
    }
  }
  return;
}
