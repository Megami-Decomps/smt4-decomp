/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035bb70` (_code @ 0x35bb70, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005cc500; /* 0x5cc500 */

/* Supplied declaration required: FUN_001800b8. */


void FUN_0035bb70(void)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)0x5cb200;
  temp_v0 = 0;
  if (temp_v0 < DAT_005cc500) {
    do {
      if (*piVar1 != 0) {
        FUN_001800b8();
        *piVar1 = 0;
      }
      temp_v0 = temp_v0 + 1;
      piVar1 = piVar1 + 0x13;
    } while (temp_v0 < DAT_005cc500);
  }
  DAT_005cc500 = 0;
  return;
}
