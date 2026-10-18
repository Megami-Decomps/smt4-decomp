/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120d42` (_code @ 0x120d42, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


void FUN_00120d42(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 0x4c);
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  FUN_002e6e5c(&uStack_18);
  return;
}
