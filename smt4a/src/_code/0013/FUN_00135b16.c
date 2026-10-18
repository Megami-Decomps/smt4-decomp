/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00135b16` (_code @ 0x135b16, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0030d3ba. */


int FUN_00135b16(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_0030d3ba(param_4,param_3,param_1);
    param_3 = param_3 + 8;
  }
  return param_3;
}
