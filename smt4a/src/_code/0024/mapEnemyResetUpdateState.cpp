#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapEnemyState *g_mapEnemy;

/* Resets the enemy update state and its timer. */
void mapEnemyResetUpdateState(void)
{
    g_mapEnemy->state = 3;
    g_mapEnemy->timer = 0;
}

} /* extern "C" */
