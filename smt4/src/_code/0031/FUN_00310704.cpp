#include "ui/MessageMain.h"

/* Script command: sets the task value of the three message windows to -2. */
extern "C" s32 FUN_00310704(void)
{
    g_messageMain.window->taskValue = -2;
    g_messageMain.banner->taskValue = -2;
    g_messageMain.aux->taskValue = -2;
    return 1;
}
