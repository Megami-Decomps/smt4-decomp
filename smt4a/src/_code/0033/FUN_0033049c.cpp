#include "ui/MessageMainA.h"

extern "C" {

extern MessageWindowA *g_messageWindows[12]; /* 0x5e2010 */

extern u32 scrGetArg(s32 index);

/* Script command: sets the script value of every message window. */
u32 FUN_0033049c(void)
{
    u32 value = scrGetArg(0);

    g_messageMain.window->taskValue = value;
    g_messageMain.banner->taskValue = value;
    g_messageMain.aux->taskValue = value;
    for (s32 i = 0; i < 12; i++) {
        g_messageWindows[i]->taskValue = value;
    }
    return 1;
}

} /* extern "C" */
