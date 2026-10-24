#include "ui/MessageMain.h"

extern "C" {

extern MessageGlobals g_messageMain;

int titleOverlaySetModeAnimation(void *state, int arg);

u32 FUN_002ed564(void)
{
    MessageWork *state = g_messageMain.state;

    if (state->closeRequested != 0) {
        titleOverlaySetModeAnimation(state, state->mode);
        state->state = 3;
        state->unk034 = 0;
        state->closeRequested = 0;
    } else if (state->state == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
