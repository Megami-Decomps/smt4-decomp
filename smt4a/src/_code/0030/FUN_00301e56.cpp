/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00301e56` (_code @ 0x301e56, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001301be(int, unsigned int, int);

/* Supplied declaration required: FUN_001301be. */


void FUN_00301e56(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  if (param_2 != 0) {
    FUN_001301be(param_2,param_3,0);
  }
  return;
}

} /* extern "C" */
