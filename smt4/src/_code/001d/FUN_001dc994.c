/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc994` (_code @ 0x1dc994, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dc21; /* 0x43dc21 */

/* Supplied declaration required: FUN_002c4c2c. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_001dc994(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0043dc21 < '\x01') {
    FUN_002c4c2c(0x11);
    FUN_002c58c8(0x11,0);
  }
  DAT_0043dc21 = DAT_0043dc21 + '\x01';
  return;
}
