/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311082` (_code @ 0x311082, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(void);
int FUN_003014a8(void);

/* Supplied declaration required: asdOperatorDeleteArray. */
/* Supplied declaration required: FUN_003014a8. */


void FUN_00311082(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 != 0) {
    FUN_003014a8();
    asdOperatorDeleteArray();
  }
  return;
}

} /* extern "C" */
