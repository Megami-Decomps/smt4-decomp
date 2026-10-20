/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4860` (_code @ 0x2a4860, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00340f88(int);

/* Supplied declaration required: FUN_00340f88. */


void FUN_002a4860(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x62) == '\0') {
    FUN_00340f88(param_1);
    return;
  }
  return;
}

} /* extern "C" */
