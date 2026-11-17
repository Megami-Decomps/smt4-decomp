#include "ui/MessageMain.h"

extern "C" {

 /* 0x43e188 */

/* Whether the message slot exists and is in state 1. */
u8 messageMainIsWindowActive(void)
{
    return g_messageMain.window != NULL && g_messageMain.window->state == 1;
}

}
