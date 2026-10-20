#include "map/lmapMain.h"

extern "C" {

void FUN_001927c0(LmapObj *obj);
void asdMemFree(void *block);
s32 jobFind(u32 job);

extern LmapMainStateA *g_lmapMainState;

/* Returns 1 while the map job runs or the block is to be kept; otherwise frees the block and
 * returns 0. */
s32 lmapMainIsRunning(void)
{
    LmapMainStateA *state = g_lmapMainState;

    if (g_lmapMainState != NULL) {
        if (jobFind(g_lmapMainState->job) != 0 || state->freeOnEnd == 0) {
            return 1;
        }
        if (g_lmapMainState != NULL) {
            FUN_001927c0(&g_lmapMainState->obj);
            asdMemFree(g_lmapMainState);
            g_lmapMainState = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
