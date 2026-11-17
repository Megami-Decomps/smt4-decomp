#include "ui/MessageMainA.h"

extern "C" {

extern s32 FUN_00165088(MessageWindowA *window, u32 mode);

/* If the message window is active (state != 0), runs FUN_00165088 for its mode and resets it to state 3. */
void msgWindowReset(void)
{
    MessageWindowA *window = g_messageMain.window;

    if (window->state != 0 && window != NULL) {
        FUN_00165088(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}

} /* extern "C" */
