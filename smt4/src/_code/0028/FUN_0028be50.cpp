/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028be50` (_code @ 0x28be50, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int);

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0028be50(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x2180) == 0) {
    *(unsigned int *)(param_1 + 0x217c) = 0;
    *(unsigned int *)(param_1 + 0x2180) = 5;
    FUN_002bd8e8(param_1 + 0x20f0,0);
    return;
  }
  return;
}

} /* extern "C" */
