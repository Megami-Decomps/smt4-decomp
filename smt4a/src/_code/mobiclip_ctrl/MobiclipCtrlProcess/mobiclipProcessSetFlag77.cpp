/* Sets the movie process's unk77 flag, if the process is running. */
#include "common.h"
#include "mobiclip_ctrl/MobiclipCtrlProcess.h"

extern "C" {

extern MobiclipProcessGlobals g_mobiclipProcess;

void mobiclipProcessSetFlag77(u8 value)
{
    if (g_mobiclipProcess.work != NULL) {
        g_mobiclipProcess.work->unk77 = value;
    }
}

} /* extern "C" */
