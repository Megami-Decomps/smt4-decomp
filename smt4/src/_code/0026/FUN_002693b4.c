/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002693b4` (_code @ 0x2693b4, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00346b84. */


void FUN_002693b4(unsigned char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 0x18) = param_3;
  *(unsigned int *)(param_1 + 0xc) = param_4;
  param_1[8] = 0;
  FUN_00346b84(param_1);
  *param_1 = 1;
  return;
}
