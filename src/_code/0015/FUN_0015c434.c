/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c434` (_code @ 0x15c434, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015d91c. */


void FUN_0015c434(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0015d91c(*(int *)(param_1 + 0x30),0,param_2,param_3);
    return;
  }
  return;
}
