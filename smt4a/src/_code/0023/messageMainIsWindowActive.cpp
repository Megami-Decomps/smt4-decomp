#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobalsA g_messageMain;

 /* 0x57f588 */

/* Whether the message slot exists and is in state 1. */
u8 messageMainIsWindowActive(void)
{
    return g_messageMain.state != NULL && g_messageMain.state->state == 1;
}

}
