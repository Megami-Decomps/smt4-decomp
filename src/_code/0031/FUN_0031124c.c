/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031124c` (_code @ 0x31124c, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_002935ec. */


void FUN_0031124c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0043dcf0 == 0) {
    return;
  }
  if (param_1 != 0) {
    FUN_002935ec(8,1);
    return;
  }
  FUN_002935ec(0x16,1);
  return;
}
