#include "battle/btlMain.h"

extern "C" {

s32 jobFind(u32 job);

extern BtlMainState *g_btlMainState;

/* 0 once the battle job is gone and the block is not to be kept; otherwise 1. */
s32 btlMainIsRunning(void)
{
    BtlMainState *state = g_btlMainState;

    if (g_btlMainState != NULL && (jobFind(g_btlMainState->job) != 0 || state->freeOnEnd == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
