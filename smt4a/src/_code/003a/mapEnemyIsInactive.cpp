#include "map/MapEnemyGlobal.h"

extern "C" {

/* Reports whether there is no active map-enemy state. */
bool mapEnemyIsInactive()
{
    return g_mapEnemy == NULL || g_mapEnemy->state == 0;
}

}
