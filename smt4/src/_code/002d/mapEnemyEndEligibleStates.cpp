#include "map/MapEnemyGlobal.h"

extern "C" {

/* Ends eligible enemy states and updates the active enemy count. */
void mapEnemyEndEligibleStates(void)
{
    for (s32 index = 0; index < MAP_ENEMY_COUNT; index++) {
        MapEnemyEntry *enemy = &g_mapEnemy->entries[index];
        if (enemy->active != 0 && enemy->kind != 0 && enemy->kind < 11 &&
            enemy->locked == 0) {
            switch (enemy->state) {
            case 7:
            case 8:
            case 13:
            case 14:
            case 15:
                g_mapEnemy->activeCount--;
                enemy->state = 9;
                enemy->elapsed = 0;
                break;
            }
        }
    }
}
}
