#include "map/MapEnemyGlobal.h"

extern "C" {

/* Selects the enemy update phase while its state is active. */
void mapEnemySelectUpdatePhase(u32 kind)
{
    MapEnemy *enemy = g_mapEnemy;
    if (enemy->state == 0) {
        return;
    }
    kind = kind == 0 ? 7 : 8;
    enemy->state = kind;
    enemy->elapsed = 0;
}

} /* extern "C" */
