/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d0b8` (_code @ 0x10d0b8, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7232(void);

/* Supplied declaration required: FUN_002e7232. */


void FUN_0010d0b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_002e7232();
  }
  *(unsigned int *)(param_1 + 0x78) = 0;
  return;
}

} /* extern "C" */
