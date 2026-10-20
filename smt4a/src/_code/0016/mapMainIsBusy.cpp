#include "map/mapMain.h"

extern "C" {

void asdMemFree(void *block);
s32 jobFind(u32 job);

extern MapMain *g_mapMain;

/* Returns 1 while the map mode's job runs or the block is to be kept; otherwise frees the block
 * and returns 0. */
s32 mapMainIsBusy(void)
{
    MapMain *main = g_mapMain;

    if (g_mapMain != NULL) {
        if (jobFind(g_mapMain->job) != 0 || main->freeOnEnd == 0) {
            return 1;
        }
        if (g_mapMain != NULL) {
            asdMemFree(g_mapMain);
            g_mapMain = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
