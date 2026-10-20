#include "map/mapDepart.h"

extern "C" {

void asdMemFree(void *block);
s32 jobFind(u32 job);

extern MapDepart *g_mapDepart;

/* Returns 1 while the departure job runs or the block is to be kept; otherwise frees the block
 * and returns 0. */
s32 mapDepartIsRunning(void)
{
    MapDepart *depart = g_mapDepart;

    if (g_mapDepart != NULL) {
        if (jobFind(g_mapDepart->job) != 0 || depart->freeOnEnd == 0) {
            return 1;
        }
        if (g_mapDepart != NULL) {
            asdMemFree(g_mapDepart);
            g_mapDepart = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
