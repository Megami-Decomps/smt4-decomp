/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c144` (_code @ 0x11c144, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011c290(void);

/* Supplied declaration required: FUN_0011c290. */


void FUN_0011c144(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x7c) = param_3;
  FUN_0011c290();
  *(unsigned int *)(param_1 + 0x7c) = 0;
  return;
}

} /* extern "C" */
