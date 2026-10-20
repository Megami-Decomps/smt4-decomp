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
