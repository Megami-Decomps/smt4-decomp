/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3ed4` (_code @ 0x1d3ed4, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


void FUN_001d3ed4(void)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x19);
  return;
}

} /* extern "C" */
