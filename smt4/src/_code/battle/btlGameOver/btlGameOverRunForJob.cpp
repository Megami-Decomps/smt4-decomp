/* Hands the job work area to btlGameOverDraw for the game-over object (a tail call), or returns 0 without one. */
#include "battle/btlGameOver.h"

extern "C" {

u32 jobGetWork(void);

extern BtlGameOver *g_btlGameOver;

u32 btlGameOverRunForJob(void)
{
    u32 work = jobGetWork();

    if (g_btlGameOver != NULL) {
        return btlGameOverDraw(g_btlGameOver, work);
    }
    return 0;
}

}
