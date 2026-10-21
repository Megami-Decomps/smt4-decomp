#include "common.h"

namespace { struct MessageState { u8 padding[0xa38]; u32 value; }; struct MessageMain { u32 job; MessageState *first; MessageState *second; MessageState *third; }; }

extern "C" {
/* Reads or updates the requested task state. */
extern MessageMain g_messageMain;
u32 scrGetArg(u32 index);
u32 FUN_002cd7d4(u32 argument)
{
    u32 value = scrGetArg(argument);
    g_messageMain.first->value = value;
    g_messageMain.second->value = value;
    g_messageMain.third->value = value;
    return 1;
}
}
