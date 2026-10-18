/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9acc` (_code @ 0x2e9acc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002eb338. */
/* Supplied declaration required: FUN_002eb588. */


void FUN_002e9acc(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  
  if (param_2 != -1) {
    uStack_18 = param_3;
    uStack_14 = param_4;
    FUN_002eb588(&uStack_18);
    FUN_002eb338(param_1,&uStack_18,param_2);
    return;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}
