#include "battle/btlMain.h"
#include "battle/BtlMainGlobals.h"

extern "C" {

s32 jobFind(u32 job);


/* 0 once the battle job is gone and the block is not to be kept; otherwise 1. */
s32 btlMainIsRunning(void)
{
    BtlMainState *state = g_btlMainState.state;

    if (g_btlMainState.state != NULL && (jobFind(g_btlMainState.state->job) != 0 || state->core.freeOnEnd == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
