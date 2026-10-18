/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acd48` (_code @ 0x3acd48, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043d9e1; /* 0x43d9e1 */

/* Supplied declaration required: FUN_002a6214. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_003acd48(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0043d9e1 < '\x01') {
    FUN_002c5b04(0x22,0);
    temp_v0 = 0;
    do {
      FUN_002a6214(0x22,temp_v0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
  }
  DAT_0043d9e1 = DAT_0043d9e1 + '\x01';
  return;
}
