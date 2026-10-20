/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002451ac` (_code @ 0x2451ac, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac068(void);

/* Supplied declaration required: FUN_002ac068. */


void FUN_002451ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2238) != 0) {
    FUN_002ac068();
    return;
  }
  return;
}

} /* extern "C" */
