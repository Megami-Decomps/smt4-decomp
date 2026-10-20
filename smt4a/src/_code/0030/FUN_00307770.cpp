/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307770` (_code @ 0x307770, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d010(unsigned int, int, int);

/* Supplied declaration required: FUN_0030d010. */


int FUN_00307770(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_0030d010(param_4,param_3,param_1);
    param_3 = param_3 + 8;
  }
  return param_3;
}

} /* extern "C" */
