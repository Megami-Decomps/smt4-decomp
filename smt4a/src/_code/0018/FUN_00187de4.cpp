/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187de4` (_code @ 0x187de4, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00187de4(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_0019a5a0();
    *param_1 = 0;
  }
  return;
}

} /* extern "C" */
