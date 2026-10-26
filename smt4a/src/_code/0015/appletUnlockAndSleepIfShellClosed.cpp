#include "common.h"

extern "C" {
void FUN_0015a400(u32 state);
void nn_applet_CTR_detail_UnlockTransition(u32 reason);
void nn_applet_CTR_detail_SleepIfShellClosed(void);
}

/* Unlock the applet transition before handling a closed shell. */
extern "C" void appletUnlockAndSleepIfShellClosed(void)
{
    FUN_0015a400(0);
    nn_applet_CTR_detail_UnlockTransition(1);
    nn_applet_CTR_detail_SleepIfShellClosed();
}
