/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302674` (_code @ 0x302674, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249324. */
/* Supplied declaration required: FUN_00257390. */


void FUN_00302674(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00257390();
  }
  FUN_00249324();
  *(unsigned int *)(param_1 + 0x44) = param_2;
  return;
}
