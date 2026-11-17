#include "ui/MessageMain.h"

extern "C" {

/* Clears the close-lock byte of the message state object and of the banner, when they exist. */
void messageClearObjectFlags(void)
{
    if (g_messageMain.window != NULL) {
        g_messageMain.window->closeLocked = 0;
    }
    if (g_messageMain.banner != NULL) {
        g_messageMain.banner->closeLocked = 0;
    }
}

} /* extern "C" */
