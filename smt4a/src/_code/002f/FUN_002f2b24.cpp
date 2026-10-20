/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2b24` (_code @ 0x2f2b24, 0xa bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e76a0(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e76a0. */


void FUN_002f2b24(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e76a0(param_1,*(unsigned int *)(param_2 + 8));
  return;
}

} /* extern "C" */
