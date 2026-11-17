#include "map/MapEnemyGlobal.h"

extern "C" {

/* Moves enemies that are mid-pursuit into the matching state. */
void mapEnemyAdvancePursuit(void)
{
    MapEnemy *enemies = g_mapEnemy;
    MapEnemyEntry *entry;
    s32 i;

    enemies->spawnAttempts = 0;
    for (i = 0; i < MAP_ENEMY_COUNT; i++) {
        entry = &enemies->entries[i];
        if (entry->active != 0 && entry->kind != 0 && entry->kind < 0xB && entry->locked == 0) {
            switch (entry->state) {
            case 0:
            case 4:
            case 5:
                entry->state = 0x14;
                entry->elapsed = 0;
                break;
            case 2:
                entry->state = 0x16;
                entry->elapsed = 0;
                break;
            }
        }
    }
}

} /* extern "C" */
