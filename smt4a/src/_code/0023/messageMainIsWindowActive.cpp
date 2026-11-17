#include "ui/MessageMainA.h"

extern "C" {

 /* 0x57f588 */

/* Whether the message slot exists and is in state 1. */
u8 messageMainIsWindowActive(void)
{
    return g_messageMain.window != NULL && g_messageMain.window->state == 1;
}

}
