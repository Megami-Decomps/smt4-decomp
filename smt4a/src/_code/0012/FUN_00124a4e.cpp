/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124a4e` (_code @ 0x124a4e, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineUrlDestroy(int);

/* Supplied declaration required: onlineUrlDestroy. */


int FUN_00124a4e(int param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1 = param_1 + 0x10;
  onlineUrlDestroy(param_1);
  return param_1 - 0x10;
}

} /* extern "C" */
