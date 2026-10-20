/* Sets the movie process's unk78 flag, if the process is running. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessSetFlag78(u8 value)
{
    if (g_mobiclipProcess.work != NULL) {
        g_mobiclipProcess.work->unk78 = value;
    }
}

} /* extern "C" */
