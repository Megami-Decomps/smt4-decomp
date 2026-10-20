/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4844` (_code @ 0x2a4844, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int func_0x00340f88(int);

/* Supplied declaration required: func_0x00340f88. */


void FUN_002a4844(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x62) == '\0') {
    func_0x00340f88(param_1 + 0x28);
    return;
  }
  return;
}

} /* extern "C" */
