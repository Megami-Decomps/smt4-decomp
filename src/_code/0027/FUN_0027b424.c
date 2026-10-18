/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b424` (_code @ 0x27b424, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044cd88; /* 0x44cd88 */

/* Supplied declaration required: FUN_00267420. */


void FUN_0027b424(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = DAT_0044cd88 + temp_v2 * 0x4c;
    if (*(char *)(temp_v1 + 0x58) != '\0') {
      temp_v0 = *(short *)(temp_v1 + 0x7c);
      if (!((temp_v0 == 3 || temp_v0 == 4) || temp_v0 == 5)) {
        if (temp_v0 == 7) {
          FUN_00267420(0);
        }
      }
      else {
        FUN_00267420(0);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x20);
  return;
}
