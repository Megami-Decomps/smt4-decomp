/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00155cb0` (_code @ 0x155cb0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFileQueueRequest(void);

/* Supplied declaration required: asdFileQueueRequest. */


void FUN_00155cb0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  asdFileQueueRequest();
  *(unsigned int *)(param_1 + 0x130) = param_3;
  *(unsigned int *)(param_1 + 0x134) = param_4;
  return;
}

} /* extern "C" */
