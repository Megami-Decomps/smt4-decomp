#include "map/MapEnemyGlobal.h"

static __inline void restartFieldEnemy(MapEnemyEntry *enemy)
{
    enemy->state = 1;
    enemy->elapsed = 0;
}

extern "C" {

/* Restarts eligible field enemies that are idle or waiting. */
void mapEnemyRestartIdleEntries(void)
{
    MapEnemy *enemies = g_mapEnemy;
    for (s32 index = 0; index < MAP_ENEMY_COUNT; index++) {
        MapEnemyEntry *enemy = &enemies->entries[index];
        if (enemy->active != 0 && enemy->kind != 0 && enemy->kind < 11 &&
            enemy->locked == 0 &&
            (enemy->state == 0 || enemy->state == 4 || enemy->state == 5)) {
            restartFieldEnemy(enemy);
        }
    }
}
}
