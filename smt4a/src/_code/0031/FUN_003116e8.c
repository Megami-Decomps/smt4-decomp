/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003116e8` (_code @ 0x3116e8, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f4ba8. */


void FUN_003116e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x30) = param_5;
  *(unsigned int *)(param_1 + 0x28) = param_4;
  *(unsigned int *)(param_1 + 0x24) = param_3;
  *(unsigned int *)(param_1 + 0x2c) = param_2;
  FUN_002f4ba8(param_1,param_6);
  return;
}
