/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003079e8` (_code @ 0x3079e8, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00301e56(unsigned int, int, int);

/* Supplied declaration required: FUN_00301e56. */


int FUN_003079e8(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_00301e56(param_4,param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  return param_3;
}

} /* extern "C" */
