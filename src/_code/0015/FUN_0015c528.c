/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015c528` (_code @ 0x15c528, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0015da10. */


void FUN_0015c528(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0015da10(*(int *)(param_1 + 0x30),0,param_2,param_3);
    return;
  }
  return;
}
