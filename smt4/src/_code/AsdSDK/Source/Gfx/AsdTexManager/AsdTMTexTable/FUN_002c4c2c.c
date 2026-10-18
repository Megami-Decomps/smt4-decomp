/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4c2c` (_code @ 0x2c4c2c, 0x26c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c5914. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4c2c(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  FUN_002c5914(param_1,0);
  software_interrupt(0xcf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
