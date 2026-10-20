/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ee9ce` (_code @ 0x2ee9ce, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030fee0(void);

/* Supplied declaration required: FUN_0030fee0. */


unsigned int FUN_002ee9ce(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0030fee0();
  return *(unsigned int *)(param_1 + 8);
}

} /* extern "C" */
