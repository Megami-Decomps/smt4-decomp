/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa624` (_code @ 0x2aa624, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00147914. */


void FUN_002aa624(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(*(int *)(param_1 + 0x34) + 8) =
       (((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U) >> 3;
  FUN_00147914(*(unsigned int *)(param_2 + 4),*(unsigned int *)(param_2 + 8));
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0xc) | 4;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_1 + 0x30);
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  return;
}
