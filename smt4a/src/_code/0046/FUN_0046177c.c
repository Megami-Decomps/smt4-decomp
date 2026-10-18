/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046177c` (_code @ 0x46177c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_005084a8. */


void FUN_0046177c(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  if ((*param_2 == 0x4d545343) && (param_2[2] + 0xfe000000U < 0x30101)) {
    *param_1 = (unsigned int)param_2;
    piVar1 = param_2;
    FUN_005084a8();
    param_1[1] = (int)piVar1 + (int)param_2 + 8;
  }
  return;
}
