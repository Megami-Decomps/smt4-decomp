/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c37f0` (_code @ 0x2c37f0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_CriticalSection_Enter. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c37f0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  nn_os_CriticalSection_Enter(param_1 + 0x1c4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
