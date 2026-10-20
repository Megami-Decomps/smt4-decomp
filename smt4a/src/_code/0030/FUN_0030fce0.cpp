/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fce0` (_code @ 0x30fce0, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030d03c(int);

/* Supplied declaration required: FUN_0030d03c. */


void FUN_0030fce0(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    FUN_0030d03c(param_2);
  }
  return;
}

} /* extern "C" */
