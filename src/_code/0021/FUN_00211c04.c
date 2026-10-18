/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211c04` (_code @ 0x211c04, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dc70; /* 0x43dc70 */

/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_00211c04(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043dc70 < '\x01') {
    FUN_002c4e28(0x13);
    temp_v0 = 0;
    do {
      FUN_002c5ab8(0x13,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
  }
  DAT_0043dc70 = DAT_0043dc70 + '\x01';
  return;
}
