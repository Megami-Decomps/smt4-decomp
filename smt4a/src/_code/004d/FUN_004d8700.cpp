/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8700` (_code @ 0x4d8700, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fda08(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_003fda08. */


void FUN_004d8700(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != 0) {
    FUN_003fda08(*(unsigned int *)(*param_1 + 4),param_2,2);
    return;
  }
  return;
}

} /* extern "C" */
