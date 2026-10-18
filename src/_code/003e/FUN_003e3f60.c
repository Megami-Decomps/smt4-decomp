/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e3f60` (_code @ 0x3e3f60, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225e10. */
/* Supplied declaration required: FUN_003e4094. */
/* Supplied declaration required: FUN_003e4224. */


unsigned int FUN_003e3f60(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  if ((~*(unsigned int *)(param_2 + 4) & 1) != 0) {
    *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x1c;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) | 1;
  }
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  param_4 = param_4 + 8;
  FUN_003e4224(param_1,param_2,param_4);
  FUN_003e4094(param_1,param_2,param_4);
  FUN_00225e10(param_1,param_2,param_4);
  return 1;
}
