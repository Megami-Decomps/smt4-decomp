/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123772` (_code @ 0x123772, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00103bdc(void);

/* Supplied declaration required: FUN_00103bdc. */


void FUN_00123772(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_00103bdc();
  }
  return;
}

} /* extern "C" */
