/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3b58` (_code @ 0x2f3b58, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00110654. */


void FUN_002f3b58(unsigned int param_1,unsigned short param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned short *)(param_3 + 0x20) = param_2;
  FUN_00110654(param_1,param_3);
  return;
}
