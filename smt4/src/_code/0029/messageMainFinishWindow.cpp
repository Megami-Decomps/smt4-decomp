#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

int titleOverlaySetModeAnimation(MessageWork *state, int arg);

void messageMainFinishWindow(void)
{
    MessageWork *state = g_messageMain.state;

    if (state != NULL && state->state != 0) {
        state->closeRequested = 1;
        state->unkA10 = 1;
        titleOverlaySetModeAnimation(state, state->mode);
        state->state = 3;
        state->unk034 = 0;
        state->closeRequested = 0;
    }
}

} /* extern "C" */
