/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8518` (_code @ 0x4d8518, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ff98c(unsigned int);

/* Supplied declaration required: FUN_004ff98c. */


void FUN_004d8518(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_004ff98c(*(unsigned int *)(*param_1 + 4));
    return;
  }
  return;
}

} /* extern "C" */
