#include "ui/MessageMain.h"

extern "C" {
/* Reads or updates the requested task state. */

u32 scrGetArg(u32 index);
u32 messageMainSetTaskValueFromScript(void)
{
    u32 value = scrGetArg(0);
    g_messageMain.window->taskValue = value;
    g_messageMain.banner->taskValue = value;
    g_messageMain.aux->taskValue = value;
    return 1;
}
}
