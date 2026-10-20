/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e76a0` (_code @ 0x2e76a0, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7674(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_002e7674. */


unsigned int FUN_002e76a0(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  FUN_002e7674(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10));
  return param_1;
}

} /* extern "C" */
