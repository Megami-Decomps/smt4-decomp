#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapEnemyRequestWork *g_mapEnemy;

/* Put an active enemy request into state nine and reset its counter. */
void mapEnemyStopRequest(void)
{
    if (g_mapEnemy->state != 0) {
        g_mapEnemy->state = 9;
        g_mapEnemy->counter = 0;
    }
}

}
