/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ff4c` (_code @ 0x32ff4c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004c5830; /* 0x4c5830 */

/* Supplied declaration required: FUN_00241dc8. */
/* Supplied declaration required: FUN_0028ef28. */


void FUN_0032ff4c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    for (temp_v0 = (&DAT_004c5830)[(temp_v1 & 0xff) * 4]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
      FUN_0028ef28(temp_v0);
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  temp_v1 = 0;
  do {
    FUN_00241dc8(temp_v1 & 0xff);
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}
