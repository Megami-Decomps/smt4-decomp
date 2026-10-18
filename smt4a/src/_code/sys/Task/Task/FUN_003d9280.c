/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9280` (_code @ 0x3d9280, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00619988; /* 0x619988 */

/* Supplied declaration required: FUN_0021a610. */
/* Supplied declaration required: FUN_003d4bbc. */


void FUN_003d9280(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  do {
    for (temp_v0 = (&DAT_00619988)[(temp_v1 & 0xff) * 4]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x20)) {
      FUN_0021a610(temp_v0);
    }
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  temp_v1 = 0;
  do {
    FUN_003d4bbc(temp_v1 & 0xff);
    temp_v1 = temp_v1 + 1;
  } while ((int)temp_v1 < 5);
  return;
}
