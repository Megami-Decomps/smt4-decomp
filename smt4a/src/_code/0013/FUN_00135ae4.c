/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135ae4` (_code @ 0x135ae4, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9598. */


int FUN_00135ae4(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  while (param_1 != param_2) {
    param_2 = param_2 - 8;
    param_3 = param_3 - 8;
    FUN_002e9598(param_3,param_2);
  }
  return param_3;
}
