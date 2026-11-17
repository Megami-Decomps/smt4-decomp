#include "map/MapEnemyGlobal.h"

extern "C" {

/* Resets the enemy update state and its timer. */
void mapEnemyResetUpdateState(void)
{
    g_mapEnemy->state = 3;
    g_mapEnemy->elapsed = 0;
}

} /* extern "C" */
