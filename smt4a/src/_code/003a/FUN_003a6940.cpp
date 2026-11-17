#include "ui/MessageMainA.h"

extern "C" {

extern MessageWindowA *g_messageWindows[12];

/* Script command: resets the task value of every message window to -2. */
u32 FUN_003a6940(void)
{
    g_messageMain.window->taskValue = -2;
    g_messageMain.banner->taskValue = -2;
    g_messageMain.aux->taskValue = -2;
    for (s32 i = 0; i < 12; i++) {
        g_messageWindows[i]->taskValue = -2;
    }
    return 1;
}

} /* extern "C" */
