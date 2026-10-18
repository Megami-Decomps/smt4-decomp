/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275a8c` (_code @ 0x275a8c, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00448c20; /* 0x448c20 */

/* Supplied declaration required: FUN_00287a3c. */


void FUN_00275a8c(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int unaff_r7;
  
  if ((*(char *)(DAT_00448c20 + 9) != '\0') && (*(char *)(DAT_00448c20 + 8) == '\0')) {
    piVar1 = (int *)(DAT_00448c20 + 4);
    temp_v0 = 0;
    if (0 < *piVar1) {
      unaff_r7 = 0;
    }
    *(unsigned char *)(DAT_00448c20 + 8) = 1;
    if (0 < *piVar1) {
      do {
        temp_v1 = DAT_00448c20 + temp_v0 * 0x20;
        if (*(char *)(temp_v1 + 0xc) != '\0') {
          if (*(short *)(temp_v1 + 0x1c) != 0) {
            if ((*(short *)(temp_v1 + 0x1c) == 1) && (*(int *)(temp_v1 + 0x18) != 0)) {
              FUN_00287a3c(*(unsigned int *)(temp_v1 + 0x14));
              *(unsigned int *)(temp_v1 + 0x18) = unaff_r7;
              *(short *)(temp_v1 + 0x1e) = (short)unaff_r7;
              *(unsigned int *)(temp_v1 + 0x14) = unaff_r7;
            }
          }
          else {
            FUN_00287a3c(*(unsigned int *)(temp_v1 + 0x14));
            *(unsigned int *)(temp_v1 + 0x14) = unaff_r7;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(DAT_00448c20 + 4));
    }
  }
  return;
}
