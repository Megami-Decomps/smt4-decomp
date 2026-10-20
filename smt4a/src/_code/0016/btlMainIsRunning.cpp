#include "battle/btlMain.h"

extern "C" {

s32 jobFind(u32 job);

extern BtlMainGlobalsA g_btlMain;

/* 1 while the battle job runs or the block is to be kept; otherwise 0. */
s32 btlMainIsRunning(void)
{
    BtlMainStateA *state = g_btlMain.state;

    if (g_btlMain.state != NULL && (jobFind(g_btlMain.state->job) != 0 || state->freeOnEnd == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
