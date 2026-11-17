#include "map/MapEnemyGlobal.h"

extern "C" {

/* Start an enemy request with its counter reset and supplied arguments. */
void mapEnemyStartRequest(u32 first, u32 second)
{
    g_mapEnemy->state = 1;
    g_mapEnemy->elapsed = 0;
    g_mapEnemy->requestArgs[0] = first;
    g_mapEnemy->requestArgs[1] = second;
}

}
