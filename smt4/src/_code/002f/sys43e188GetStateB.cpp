#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u8 sys43e188GetStateB(void)
{
    return g_messageMain.state->state == 4;
}

} /* extern "C" */
