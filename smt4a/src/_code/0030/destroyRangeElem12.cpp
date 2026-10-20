/* NON_MATCHING: romwright 0.5.0 decompilation of `destroyRangeElem12` (_code @ 0x30fce0, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vectorTeardown_0030d03c(int);

/* Supplied declaration required: vectorTeardown_0030d03c. */


void destroyRangeElem12(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  for (; param_2 != param_3; param_2 = param_2 + 0xc) {
    vectorTeardown_0030d03c(param_2);
  }
  return;
}

} /* extern "C" */
