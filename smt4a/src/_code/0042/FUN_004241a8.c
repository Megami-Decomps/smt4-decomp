/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004241a8` (_code @ 0x4241a8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001af148. */
/* Supplied declaration required: FUN_004257e4. */


void FUN_004241a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  while (*(char *)(param_1 + 0x10) != '\x01') {
    FUN_001af148(param_1 + 0x20);
    FUN_004257e4(param_1);
  }
  return;
}
