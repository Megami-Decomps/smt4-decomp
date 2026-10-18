/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad98c` (_code @ 0x1ad98c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044e141; /* 0x44e141 */

/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001ad98c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e141 < '\x01') {
    FUN_002c4c2c(0x1a);
    temp_v0 = 0;
    do {
      FUN_002c58c8(0x1a,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 3);
  }
  DAT_0044e141 = DAT_0044e141 + '\x01';
  return;
}
