/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030798e` (_code @ 0x30798e, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d3ba(unsigned int, int, unsigned int);

/* Supplied declaration required: FUN_0030d3ba. */


void FUN_0030798e(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_0030d3ba(param_4,param_1,param_3);
    param_1 = param_1 + 8;
  }
  return;
}

} /* extern "C" */
