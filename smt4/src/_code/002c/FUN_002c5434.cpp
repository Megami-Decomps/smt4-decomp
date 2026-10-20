#include "common.h"

extern "C" {

extern u8 DAT_0044e3b0;
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);

void FUN_002c5434(int sleep)
{
    DAT_0044e3b0 = 1;
    if (sleep != 0) {
        nn_applet_CTR_detail_SleepIfShellClosed();
        return;
    }
}

} /* extern "C" */
