/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f73e4` (_code @ 0x2f73e4, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0059495b; /* 0x59495b */

/* Supplied declaration required: nn_os_CriticalSection_Enter. */


void FUN_002f73e4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (DAT_0059495b == '\0') {
    nn_os_CriticalSection_Enter(param_1 + 4);
  }
  return;
}
