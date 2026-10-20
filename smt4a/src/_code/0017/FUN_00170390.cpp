/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00170390` (_code @ 0x170390, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005891f4; /* 0x5891f4 */

extern void nn_applet_CTR_detail_SleepIfShellClosed(void);


void FUN_00170390(int param_1)

{
  DAT_005891f4 = 1;
  if (param_1 != 0) {
    nn_applet_CTR_detail_SleepIfShellClosed();
    return;
  }
  return;
}

} /* extern "C" */
