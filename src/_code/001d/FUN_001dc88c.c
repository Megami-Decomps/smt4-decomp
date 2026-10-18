/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc88c` (_code @ 0x1dc88c, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0043dc21; /* 0x43dc21 */

/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_001dc88c(void)

{
/* irregular: 2 native warning(s); review required */
  if (DAT_0043dc21 < '\x01') {
    FUN_002c4e28(0x11);
    FUN_002c5ab8(0x11,0);
  }
  DAT_0043dc21 = DAT_0043dc21 + '\x01';
  return;
}
