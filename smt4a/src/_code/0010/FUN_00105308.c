/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105308` (_code @ 0x105308, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ea446. */


void FUN_00105308(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (0 < *(int *)(param_1 + 0x3c)) {
    FUN_002ea446();
    return;
  }
  FUN_002ea43c();
  return;
}
