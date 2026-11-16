/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7258` (_code @ 0x2e7258, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysReportCheckFailure(void);

/* Supplied declaration required: sysReportCheckFailure. */


void FUN_002e7258(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 < 0) {
    sysReportCheckFailure();
  }
  return;
}

} /* extern "C" */
