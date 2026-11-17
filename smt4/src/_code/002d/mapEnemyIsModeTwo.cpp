#include "map/MapEnemyGlobal.h"

extern "C" {

/* Tests the enemy system's active mode. */
s32 mapEnemyIsModeTwo(void)
{
    return g_mapEnemy->state == 2;
}
}
