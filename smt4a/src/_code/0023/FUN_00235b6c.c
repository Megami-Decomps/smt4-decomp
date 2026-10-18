/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235b6c` (_code @ 0x235b6c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005821a0; /* 0x5821a0 */

/* Supplied declaration required: FUN_003d5000. */


void FUN_00235b6c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(char *)(DAT_005821a0 + 9) != '\0') {
    temp_v0 = 0;
    if (temp_v0 < *(int *)(DAT_005821a0 + 4)) {
      do {
        temp_v1 = DAT_005821a0 + temp_v0 * 0x20;
        if (*(char *)(temp_v1 + 0xc) != '\0') {
          if (*(int *)(temp_v1 + 0x18) != 0) {
            FUN_003d5000(*(unsigned int *)(temp_v1 + 0x14));
            *(unsigned int *)(temp_v1 + 0x18) = 0;
            *(unsigned short *)(temp_v1 + 0x1e) = 0;
            *(unsigned int *)(temp_v1 + 0x14) = 0;
          }
          *(char *)(temp_v1 + 0xc) = '\0';
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(DAT_005821a0 + 4));
    }
    temp_v0 = DAT_005821a0;
    *(unsigned int *)(DAT_005821a0 + 4) = 0;
    *(unsigned char *)(temp_v0 + 8) = 0;
    *(unsigned char *)(temp_v0 + 9) = 0;
  }
  return;
}
