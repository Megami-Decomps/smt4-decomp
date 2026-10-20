/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcf80` (_code @ 0x3bcf80, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

/* Supplied declaration required: FUN_001846d0. */


void FUN_003bcf80(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 == 0) {
    return;
  }
  FUN_001846d0(param_1 + 0x368,4);
  *(unsigned int *)(param_1 + 0x3f4) = 0;
  *(unsigned int *)(param_1 + 0x3f8) = 5;
  return;
}

} /* extern "C" */
