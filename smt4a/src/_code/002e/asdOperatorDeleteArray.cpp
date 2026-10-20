/* NON_MATCHING: romwright 0.5.0 decompilation of `asdOperatorDeleteArray` (_code @ 0x2e6e14, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010725a(unsigned int);

/* Supplied declaration required: FUN_0010725a. */


void asdOperatorDeleteArray(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_0010725a(*(unsigned int *)(param_1 - 8));
  }
  return;
}

} /* extern "C" */
