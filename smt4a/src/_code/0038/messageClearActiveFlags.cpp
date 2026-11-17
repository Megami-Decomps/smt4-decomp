#include "ui/MessageMainA.h"

extern "C" {

void messageClearActiveFlags(void)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->closeLocked = 0;
    }
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->closeLocked = 0;
    }
}

} /* extern "C" */
