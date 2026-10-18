/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321500` (_code @ 0x321500, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00184758. */


void FUN_00321500(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x243c) == 0) {
    *(int *)(param_1 + 0x243c) = 5;
    *(unsigned int *)(param_1 + 0x2438) = 0;
    FUN_00184758(param_1 + 0x20f0,0,0);
    return;
  }
  return;
}
