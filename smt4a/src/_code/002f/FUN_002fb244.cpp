/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb244` (_code @ 0x2fb244, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010032e(void);

/* Supplied declaration required: FUN_0010032e. */


void FUN_002fb244(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0010032e();
  *(unsigned char *)(param_1 + 4) = 1;
  return;
}

} /* extern "C" */
