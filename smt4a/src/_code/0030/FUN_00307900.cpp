/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307900` (_code @ 0x307900, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9afe(int, int);

/* Supplied declaration required: FUN_002e9afe. */


int FUN_00307900(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_002e9afe(param_3,param_1);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}

} /* extern "C" */
