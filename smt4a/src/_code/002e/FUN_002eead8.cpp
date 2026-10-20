/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eead8` (_code @ 0x2eead8, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e755c(unsigned int, unsigned int, int);

/* Supplied declaration required: FUN_002e755c. */


void FUN_002eead8(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e755c(param_1,param_2,param_3 << 1);
  return;
}

} /* extern "C" */
