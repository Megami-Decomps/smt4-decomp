#include "map/mapDepart.h"

extern "C" {

void jobStop(u32 job, s32 arg);

extern MapDepart *g_mapDepart;

/* Stops the departure job. */
void mapDepartStopJob(void)
{
    jobStop(g_mapDepart->job, 0);
}

} /* extern "C" */
