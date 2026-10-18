/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ae90` (_code @ 0x27ae90, 0x2e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e70; /* 0x447e70 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_002671f4. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */


void FUN_0027ae90(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00447e70 + temp_v1 * 0x48;
    if (*(char *)(temp_v0 + 0x14) != '\0') {
      if ((DAT_0049f91c != 4) || (DAT_0049f920 != 1)) {
        if (*(int *)(temp_v0 + 0x38) == 2) {
          FUN_0028250c();
          FUN_00282390();
          FUN_002671f4(0);
        }
        if (*(int *)(temp_v0 + 0x38) == 10) {
          FUN_0028250c();
          FUN_00282390();
          FUN_002671f4(0);
        }
      }
      if (*(int *)(temp_v0 + 0x38) == 7) {
        FUN_0028250c();
        FUN_00282390();
        FUN_002671f4(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 9) {
        FUN_0028250c();
        FUN_00282390();
        FUN_002671f4(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0xb) {
        FUN_0028250c();
        FUN_00282390();
        FUN_002671f4(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0xf) {
        FUN_002671f4(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0x10) {
        FUN_002671f4(0);
      }
      if (*(int *)(temp_v0 + 0x38) == 0x11) {
        FUN_002671f4(0);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}
