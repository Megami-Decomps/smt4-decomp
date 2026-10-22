#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapEnemyState *g_mapEnemy;

/* Selects the enemy update phase while its state is active. */
void mapEnemySelectUpdatePhase(u32 kind)
{
    MapEnemyState *enemy = g_mapEnemy;
    if (enemy->state == 0) {
        return;
    }
    kind = kind == 0 ? 7 : 8;
    enemy->state = kind;
    enemy->timer = 0;
}

} /* extern "C" */
