#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_002e2948(u8 value)
{
    g_messageMain.state->unkA34 = value;
}

} /* extern "C" */
