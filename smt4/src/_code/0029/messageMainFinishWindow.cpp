#include "ui/MessageMain.h"

extern "C" {

int titleOverlaySetModeAnimation(MessageWindow *state, int arg);

void messageMainFinishWindow(void)
{
    MessageWindow *state = g_messageMain.window;

    if (state != NULL && state->state != 0) {
        state->closeRequested = 1;
        state->displayEnabled = 1;
        titleOverlaySetModeAnimation(state, state->mode);
        state->state = 3;
        state->unk034 = 0;
        state->closeRequested = 0;
    }
}

} /* extern "C" */
