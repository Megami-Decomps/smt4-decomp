/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211d00` (_code @ 0x211d00, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dc70; /* 0x43dc70 */

/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_00211d00(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043dc70 < '\x01') {
    FUN_002c4c2c(0x13);
    temp_v0 = 0;
    do {
      FUN_002c58c8(0x13,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  DAT_0043dc70 = DAT_0043dc70 + '\x01';
  return;
}
