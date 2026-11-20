#include "nn/applet/SleepModule.h"

extern "C" {

extern u8 g_appletSleepModuleState;
extern void nn_applet_CTR_detail_SleepIfShellClosed(void);

void sleepAllow(int sleep)
{
    g_appletSleepModuleState = 1;
    if (sleep != 0) {
        nn_applet_CTR_detail_SleepIfShellClosed();
        return;
    }
}

} /* extern "C" */
