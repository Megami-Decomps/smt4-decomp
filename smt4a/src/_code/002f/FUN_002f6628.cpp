/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6628` (_code @ 0x2f6628, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f670c(int, int);

/* Supplied declaration required: FUN_002f670c. */


int FUN_002f6628(int param_1)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x9c0) = 0x271;
  *(unsigned int *)(param_1 + 0x9c4) = 0;
  *(unsigned int *)(param_1 + 0x9c8) = 0x9908b0df;
  FUN_002f670c(param_1,1);
  return param_1;
}

} /* extern "C" */
