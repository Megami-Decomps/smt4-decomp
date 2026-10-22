#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;
/* Reads or updates the requested task state. */

u32 scrGetArg(u32 index);
u32 messageMainSetTaskValueFromScript(u32 argument)
{
    u32 value = scrGetArg(argument);
    g_messageMain.state->taskValue = value;
    g_messageMain.banner->taskValue = value;
    g_messageMain.unk0C->taskValue = value;
    return 1;
}
}
