/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030791e` (_code @ 0x30791e, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030d358. */


int FUN_0030791e(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_0030d358(param_4,param_3,param_1);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}
