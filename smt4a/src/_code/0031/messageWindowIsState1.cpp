#include "ui/MessageMainA.h"

extern "C" {

/* True while the message window exists and is in state 1. */
u8 messageWindowIsState1(void)
{
    return g_messageMain.banner != NULL && g_messageMain.banner->state == 1;
}

} /* extern "C" */
