#include "battle/btlGameOver.h"
#include "shard/JobWork.h"

extern "C" {

extern BtlGameOverA *g_btlGameOver;

extern s32 btlGameOverDrawOverlay(void *gameOver, void *work);

/* Runs btlGameOverDrawOverlay for the game-over object when there is one; 0 otherwise. */
s32 btlGameOverDispatchCurrentJob(u32 job)
{
    void *work = (void *)jobGetWork(job);

    if (g_btlGameOver != NULL) {
        return btlGameOverDrawOverlay(g_btlGameOver, work);
    }
    return 0;
}

} /* extern "C" */
