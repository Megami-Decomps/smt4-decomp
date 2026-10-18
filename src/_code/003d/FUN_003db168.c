/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db168` (_code @ 0x3db168, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002f6ac0. */


void FUN_003db168(int param_1,unsigned short param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_002f6ac0(param_3,param_2,param_4 != 0);
  *(unsigned int *)(param_1 + 0x1cfc) = param_3;
  return;
}
