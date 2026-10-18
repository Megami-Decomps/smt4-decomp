/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fd40` (_code @ 0x30fd40, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030d108. */


int FUN_0030fd40(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_0030d108(param_4,param_3,param_1);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}
