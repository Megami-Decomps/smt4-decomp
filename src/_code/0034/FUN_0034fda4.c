/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034fda4` (_code @ 0x34fda4, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3628. */
/* Supplied declaration required: FUN_003513dc. */


void FUN_0034fda4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  while (FUN_002c3628(param_1 + 0x20), *(char *)(param_1 + 0x10) != '\x01') {
    FUN_003513dc(param_1);
  }
  return;
}
