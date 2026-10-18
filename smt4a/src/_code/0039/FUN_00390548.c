/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390548` (_code @ 0x390548, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00221f20. */
/* Supplied declaration required: FUN_00222104. */


void FUN_00390548(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00222104();
  }
  FUN_00221f20();
  *(unsigned int *)(param_1 + 0x44) = param_2;
  return;
}
