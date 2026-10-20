/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001005dc` (_code @ 0x1005dc, 0x12 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c66cc(int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002c66cc. */


void FUN_001005dc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    FUN_002c66cc(param_1,param_2,*(unsigned int *)(param_1 - 8),*(unsigned int *)(param_1 - 4));
  }
  return;
}

} /* extern "C" */
