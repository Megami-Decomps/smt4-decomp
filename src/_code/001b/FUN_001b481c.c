/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b481c` (_code @ 0x1b481c, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_002946f4. */
/* Supplied declaration required: FUN_00294a64. */
/* Supplied declaration required: FUN_00343e90. */


void FUN_001b481c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00294a64(*(unsigned int *)(DAT_00447e88 + 0x194),0x1c0);
  temp_v0 = 0;
  if (*(char *)(DAT_00447e88 + 0x198) == '\0') {
    do {
      FUN_002946f4(*(unsigned int *)(DAT_00447e88 + 0x194),temp_v0 & 0xff);
      temp_v0 = temp_v0 + 1;
    } while ((int)temp_v0 < 3);
    return;
  }
  do {
    FUN_00343e90(*(unsigned int *)(DAT_00447e88 + 0x194),temp_v0 & 0xff,
                 *(unsigned int *)(DAT_00447e88 + temp_v0 * 4 + 0x19c));
    temp_v0 = temp_v0 + 1;
  } while ((int)temp_v0 < 3);
  return;
}
