/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311544` (_code @ 0x311544, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_001a0990. */


void FUN_00311544(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_001a08d8(*(unsigned int *)(param_1 + 4));
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_001a0990(*(unsigned int *)(param_1 + 4));
  }
  return;
}
