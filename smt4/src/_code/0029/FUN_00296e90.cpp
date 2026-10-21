#include "shard/Sys43e188.h"

extern "C" {

int titleOverlaySetModeAnimation(StateObj *state, int arg);

void FUN_00296e90(void)
{
    StateObj *state = g_messageMain.state;

    if (state != NULL && state->state != 0) {
        state->unk035 = 1;
        state->unkA10 = 1;
        titleOverlaySetModeAnimation(state, state->unk009);
        state->state = 3;
        state->unk034 = 0;
        state->unk035 = 0;
    }
}

} /* extern "C" */
