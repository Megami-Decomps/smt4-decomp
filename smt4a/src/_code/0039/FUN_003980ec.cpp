/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003980ec` (_code @ 0x3980ec, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e342c(int, unsigned int);

/* Supplied declaration required: FUN_002e342c. */


void FUN_003980ec(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 * 0x17c + 0x5f33d4) = param_2;
  FUN_002e342c(param_1 * 0x17c + 0x5f33d8,param_3);
  return;
}

} /* extern "C" */
