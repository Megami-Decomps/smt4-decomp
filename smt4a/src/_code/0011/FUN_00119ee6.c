/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119ee6` (_code @ 0x119ee6, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9598. */


int FUN_00119ee6(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned char *)(param_1 + 5) = *(unsigned char *)(param_2 + 5);
  FUN_002e9598(param_1 + 8,param_2 + 8);
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_2 + 0x10);
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_2 + 0x14);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0x18);
  return param_1;
}
