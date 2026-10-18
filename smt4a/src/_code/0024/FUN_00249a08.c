/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00249a08` (_code @ 0x249a08, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005821a0; /* 0x5821a0 */

/* Supplied declaration required: FUN_003d5000. */


void FUN_00249a08(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r7;
  
  if ((*(char *)(DAT_005821a0 + 9) != '\0') && (*(char *)(DAT_005821a0 + 8) == '\0')) {
    piVar1 = (int *)(DAT_005821a0 + 4);
    temp_v0 = 0;
    if (0 < *piVar1) {
      unaff_r7 = 0;
    }
    *(unsigned char *)(DAT_005821a0 + 8) = 1;
    if (0 < *piVar1) {
      do {
        temp_v1 = DAT_005821a0 + temp_v0 * 0x20;
        if (*(char *)(temp_v1 + 0xc) != '\0') {
          if (*(short *)(temp_v1 + 0x1c) != 0) {
            if ((*(short *)(temp_v1 + 0x1c) == 1) && (*(int *)(temp_v1 + 0x18) != 0)) {
              FUN_003d5000(*(unsigned int *)(temp_v1 + 0x14));
              *(unsigned int *)(temp_v1 + 0x18) = unaff_r7;
              *(short *)(temp_v1 + 0x1e) = (short)unaff_r7;
              *(unsigned int *)(temp_v1 + 0x14) = unaff_r7;
            }
          }
          else {
            FUN_003d5000(*(unsigned int *)(temp_v1 + 0x14));
            *(unsigned int *)(temp_v1 + 0x14) = unaff_r7;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(DAT_005821a0 + 4));
    }
  }
  return;
}
