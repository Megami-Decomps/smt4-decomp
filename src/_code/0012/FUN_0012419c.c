/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012419c` (_code @ 0x12419c, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_0012419c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  software_interrupt(0x28);
  return param_1;
}
