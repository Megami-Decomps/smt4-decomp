#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e3b0; /* 0x44e3b0 */

extern void nn_applet_CTR_detail_SleepIfShellClosed(void);


void FUN_002c5434(int param_1)

{
  DAT_0044e3b0 = 1;
  if (param_1 != 0) {
    nn_applet_CTR_detail_SleepIfShellClosed();
    return;
  }
  return;
}

} /* extern "C" */
