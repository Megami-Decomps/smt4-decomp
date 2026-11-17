#include "map/MapEnemyGlobal.h"

extern "C" {

/* Put an active enemy request into state nine and reset its counter. */
void mapEnemyStopRequest(void)
{
    if (g_mapEnemy->state != 0) {
        g_mapEnemy->state = 9;
        g_mapEnemy->elapsed = 0;
    }
}

}
