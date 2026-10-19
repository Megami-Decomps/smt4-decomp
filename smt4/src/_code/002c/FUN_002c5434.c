/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5434` (_code @ 0x2c5434, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: nn_applet_CTR_detail_SleepIfShellClosed. */


void FUN_002c5434(int param_1)

{
/* irregular: 1 native warning(s); review required */
  DAT_0044e3b0 = 1;
  if (param_1 != 0) {
    nn_applet_CTR_detail_SleepIfShellClosed();
    return;
  }
  return;
}
