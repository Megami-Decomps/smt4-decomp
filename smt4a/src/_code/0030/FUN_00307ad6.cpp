/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307ad6` (_code @ 0x307ad6, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003116d6(unsigned int, int, int);

/* Supplied declaration required: FUN_003116d6. */


int FUN_00307ad6(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_003116d6(param_4,param_3,param_1);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}

} /* extern "C" */
