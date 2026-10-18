/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002235e8` (_code @ 0x2235e8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004bd0dc; /* 0x4bd0dc */

/* Supplied declaration required: FUN_00152af8. */


void FUN_002235e8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  DAT_004bd0dc = 0;
  do {
    temp_v0 = 1;
    do {
      if (*(int *)(temp_v1 * 0x100 + temp_v0 * 4 + 0x4bd110) != 0) {
        FUN_00152af8();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x40);
    if (*(int *)(temp_v1 * 4 + 0x4bd0f8) != 0) {
      FUN_00152af8();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 6);
  return;
}
