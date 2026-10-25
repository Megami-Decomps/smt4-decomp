#include "battle/btlGameOver.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void scrScriptProcessDestroy(void *process);

extern BtlGameOverA *g_btlGameOver;

/* Frees the game-over state and stops the job that owns it. */
void btlGameOverDestroy(u32 job)
{
    BtlGameOverOwnerA *owner = (BtlGameOverOwnerA *)jobGetWork(job);
    BtlGameOverA *state = g_btlGameOver;

    if (g_btlGameOver != NULL) {
        if (state->process != NULL) {
            scrScriptProcessDestroy(state->process);
            state->process = NULL;
        }
        if (state->dataA != NULL) {
            asdMemFree(state->dataA);
            state->dataA = NULL;
        }
        if (state->dataB != NULL) {
            asdMemFree(state->dataB);
            state->dataB = NULL;
        }
        asdMemFree(g_btlGameOver);
        g_btlGameOver = NULL;
    }
    jobStop(owner->job, 0);
}

} /* extern "C" */
