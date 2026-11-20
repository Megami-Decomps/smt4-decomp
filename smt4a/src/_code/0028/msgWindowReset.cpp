#include "ui/MessageMainA.h"

extern "C" {

extern s32 uiPanelCloseStateSection(MessageWindowA *window, u32 mode);

/* If the message window is active (state != 0), runs uiPanelCloseStateSection for its mode and resets it to state 3. */
void msgWindowReset(void)
{
    MessageWindowA *window = g_messageMain.window;

    if (window->state != 0 && window != NULL) {
        uiPanelCloseStateSection(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

} /* extern "C" */
