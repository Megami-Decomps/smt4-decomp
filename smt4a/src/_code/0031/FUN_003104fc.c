/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003104fc` (_code @ 0x3104fc, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_003104fc(int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Leave(param_1 + 8);
  return;
}
