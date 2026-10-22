#include "battle/btlGameOver.h"

extern "C" {

extern BtlGameOverA *g_btlGameOver;

extern void *jobGetWork(void);
extern s32 FUN_003e7578(void *gameOver, void *work);

/* Runs FUN_003e7578 for the game-over object when there is one; 0 otherwise. */
s32 btlGameOverDispatchCurrentJob(void)
{
    void *work = jobGetWork();

    if (g_btlGameOver != NULL) {
        return FUN_003e7578(g_btlGameOver, work);
    }
    return 0;
}

} /* extern "C" */
