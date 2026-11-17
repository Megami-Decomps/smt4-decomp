#include "map/MapEnemyGlobal.h"

extern "C" {

extern u32 jobStop(u32 job, u16 exitCode);

/* Stops the map-enemy job. */
u32 mapEnemyStopJob(void)
{
    return jobStop(g_mapEnemy->task, 0);
}

} /* extern "C" */
