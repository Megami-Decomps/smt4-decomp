/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e14b8` (_code @ 0x2e14b8, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(void);

/* Supplied declaration required: FUN_002c415c. */


void FUN_002e14b8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x478) = 0;
  }
  return;
}

} /* extern "C" */
