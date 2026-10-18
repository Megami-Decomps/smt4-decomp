/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115a78` (_code @ 0x115a78, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f2b5c. */


void FUN_00115a78(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,*(unsigned int *)(param_1 + 0x20));
  FUN_002f2b5c(param_1,param_2,param_3);
  FUN_002e6e5c(&uStack_20);
  return;
}
