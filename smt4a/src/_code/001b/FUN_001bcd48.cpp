/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bcd48` (_code @ 0x1bcd48, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_001bcd48(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(10);
  return param_1;
}

} /* extern "C" */
