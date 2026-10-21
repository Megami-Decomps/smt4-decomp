#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapEnemyState *g_mapEnemy;
extern u32 jobStop(u32 job, u16 exitCode);

/* Stops the map-enemy job. */
u32 mapEnemyStopJob(void)
{
    return jobStop(g_mapEnemy->job, 0);
}

} /* extern "C" */
