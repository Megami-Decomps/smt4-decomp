#include "ui/MessageMain.h"

extern "C" {

extern s32 titleOverlaySetModeAnimation(MessageWindow *window, u32 mode);

/* If the message window is active (state != 0), runs titleOverlaySetModeAnimation for its mode and resets it to state 3. */
void msgWindowReset(void)
{
    MessageWindow *window = g_messageMain.window;

    if (window->state != 0 && window != NULL) {
        titleOverlaySetModeAnimation(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

} /* extern "C" */
