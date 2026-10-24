#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;
/* Reads or updates the requested task state. */

u32 scrGetArg(u32 index);
u32 messageMainSetTaskValueFromScript(void)
{
    u32 value = scrGetArg(0);
    g_messageMain.state->taskValue = value;
    g_messageMain.banner->taskValue = value;
    g_messageMain.unk0C->taskValue = value;
    return 1;
}
}
