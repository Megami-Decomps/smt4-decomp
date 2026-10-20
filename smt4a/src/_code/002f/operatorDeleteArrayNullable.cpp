/* NON_MATCHING: romwright 0.5.0 decompilation of `operatorDeleteArrayNullable` (_code @ 0x2f6bf0, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int operatorDeleteArray2(void);

/* Supplied declaration required: operatorDeleteArray2. */


void operatorDeleteArrayNullable(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != 0) {
    operatorDeleteArray2();
  }
  return;
}

} /* extern "C" */
