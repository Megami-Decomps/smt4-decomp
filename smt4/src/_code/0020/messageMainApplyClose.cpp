#include "ui/MessageMain.h"

extern "C" {

extern void titleOverlaySetModeAnimation(MessageWindow *window, u8 mode);

/* Performs a requested close of the message window: closes it, goes to state 3 and clears the request. */
void messageMainApplyClose(void)
{
    MessageWindow *window = g_messageMain.window;

    if (window->closeRequested != 0) {
        titleOverlaySetModeAnimation(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

} /* extern "C" */
