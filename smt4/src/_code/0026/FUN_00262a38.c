/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262a38` (_code @ 0x262a38, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0047e500; /* 0x47e500 */

/* Supplied declaration required: FUN_002c0894. */


void FUN_00262a38(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)0x47d200;
  temp_v0 = 0;
  if (temp_v0 < DAT_0047e500) {
    do {
      if (*piVar1 != 0) {
        FUN_002c0894();
        *piVar1 = 0;
      }
      temp_v0 = temp_v0 + 1;
      piVar1 = piVar1 + 0x13;
    } while (temp_v0 < DAT_0047e500);
  }
  DAT_0047e500 = 0;
  return;
}
