/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002147e8` (_code @ 0x2147e8, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004bce8c; /* 0x4bce8c */

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_002147e8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = 1;
    do {
      temp_v0 = temp_v1 * 4 + temp_v2 * 0x100;
      if (*(int *)(&DAT_004bce8c + temp_v0 + 0x284) != 0) {
        FUN_002a7aa0();
        *(unsigned int *)(&DAT_004bce8c + temp_v0 + 0x284) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x40);
    if (*(int *)(temp_v2 * 4 + 0x4bd0f8) != 0) {
      FUN_002a7aa0();
      *(unsigned int *)(temp_v2 * 4 + 0x4bd0f8) = 0;
      *(unsigned int *)(temp_v2 * 0x100 + 0x4bd110) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  return;
}
