#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapEnemyRequestWork *g_mapEnemy;

/* Start an enemy request with its counter reset and supplied arguments. */
void mapEnemyStartRequest(u32 first, u32 second)
{
    g_mapEnemy->state = 1;
    g_mapEnemy->counter = 0;
    g_mapEnemy->first = first;
    g_mapEnemy->second = second;
}

}
