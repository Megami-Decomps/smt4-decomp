/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f740` (_code @ 0x15f740, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_0015f740(void)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x23);
  return;
}
