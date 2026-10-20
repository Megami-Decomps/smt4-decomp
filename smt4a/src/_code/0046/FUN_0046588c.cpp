/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046588c` (_code @ 0x46588c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_LightEvent_TryWait(void);

/* Supplied declaration required: nn_os_LightEvent_TryWait. */


void FUN_0046588c(void)

{
/* irregular: 1 native warning(s); review required */
  nn_os_LightEvent_TryWait();
  return;
}

} /* extern "C" */
