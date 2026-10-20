/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307a7a` (_code @ 0x307a7a, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00307aba(int, int);

/* Supplied declaration required: FUN_00307aba. */


int FUN_00307a7a(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0x28) {
    FUN_00307aba(param_3,param_1);
    param_3 = param_3 + 0x28;
  }
  return param_3;
}

} /* extern "C" */
