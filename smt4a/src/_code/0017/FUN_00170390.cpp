#include "common.h"

extern "C" {

extern u8 DAT_005891f4;
void nn_applet_CTR_detail_SleepIfShellClosed(void);

/* Sets the flag at 0x5891F4 and, when `sleepIfClosed` is set, sleeps if the shell is closed. */
void FUN_00170390(s32 sleepIfClosed)
{
    DAT_005891f4 = 1;
    if (sleepIfClosed != 0) {
        nn_applet_CTR_detail_SleepIfShellClosed();
        return;
    }
}

} /* extern "C" */
