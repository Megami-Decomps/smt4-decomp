/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307ce2` (_code @ 0x307ce2, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ef00c(int, unsigned int);

/* Supplied declaration required: FUN_002ef00c. */


void FUN_00307ce2(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    FUN_002ef00c(param_2,param_3);
  }
  return;
}

} /* extern "C" */
