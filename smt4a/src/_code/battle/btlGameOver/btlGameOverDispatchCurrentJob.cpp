#include "battle/btlGameOver.h"
#include "shard/JobWork.h"

extern "C" {

extern BtlGameOverA *g_btlGameOver;

extern s32 FUN_003e7578(void *gameOver, void *work);

/* Runs FUN_003e7578 for the game-over object when there is one; 0 otherwise. */
s32 btlGameOverDispatchCurrentJob(u32 job)
{
    void *work = (void *)jobGetWork(job);

    if (g_btlGameOver != NULL) {
        return FUN_003e7578(g_btlGameOver, work);
    }
    return 0;
}

} /* extern "C" */
