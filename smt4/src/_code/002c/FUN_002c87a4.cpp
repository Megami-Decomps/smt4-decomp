/* NON_MATCHING: compiler reverses the zero/one constant registers and does not combine the state stores. */
#include "map/mapEnemy.h"

extern "C" {
extern MapEnemy *g_mapEnemy;

/* Restarts eligible field enemies that are idle or waiting. */
void FUN_002c87a4(void)
{
    MapEnemy *enemies = g_mapEnemy;
    for (s32 index = 0; index < MAP_ENEMY_COUNT; index++) {
        MapEnemyEntry *enemy = &enemies->entries[index];
        if (enemy->active != 0 && enemy->unk174 != 0 && enemy->unk174 < 11 &&
            enemy->unk7D == 0 &&
            (enemy->state == 0 || enemy->state == 4 || enemy->state == 5)) {
            enemy->state = 1;
            enemy->unk88 = 0;
        }
    }
}
}
