/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d90dc` (_code @ 0x4d90dc, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_004d9168. */


void FUN_004d90dc(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  FUN_004d9168(param_1,*param_1);
  piVar1 = param_1 + 1;
  param_1[3] = (int)piVar1;
  *param_1 = (int)piVar1;
  param_1[6] = (int)piVar1;
  param_1[7] = 0;
  param_1[5] = (int)piVar1;
  return;
}
