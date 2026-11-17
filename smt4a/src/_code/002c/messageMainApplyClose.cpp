#include "ui/MessageMainA.h"

extern "C" {
void FUN_00165088(MessageWindowA *window, u8 mode);

/* Applies a requested window close and enters the closed state. */
void messageMainApplyClose(void)
{
    MessageWindowA *window = g_messageMain.window;
    if (window->closeRequested != 0) {
        FUN_00165088(window, window->mode);
        window->state = 3;
        window->closeRequested = 0;
    }
}
}
