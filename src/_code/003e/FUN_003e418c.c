/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e418c` (_code @ 0x3e418c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00225fa0. */
/* Supplied declaration required: FUN_003e42c0. */
/* Supplied declaration required: FUN_003e4450. */


unsigned int FUN_003e418c(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  if ((~*(unsigned int *)(param_2 + 4) & 1) != 0) {
    *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(param_2 + 0x44) | 0x1c;
    *(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4) | 1;
  }
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  param_4 = param_4 + 8;
  FUN_003e4450(param_1,param_2,param_4);
  FUN_003e42c0(param_1,param_2,param_4);
  FUN_00225fa0(param_1,param_2,param_4);
  return 1;
}
