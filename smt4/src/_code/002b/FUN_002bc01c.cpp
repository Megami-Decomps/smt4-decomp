/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc01c` (_code @ 0x2bc01c, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUnique(void);

/* Supplied declaration required: eventQueueAddUnique. */


void FUN_002bc01c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (-1 < param_1) {
    eventQueueAddUnique();
    return;
  }
  return;
}

} /* extern "C" */
