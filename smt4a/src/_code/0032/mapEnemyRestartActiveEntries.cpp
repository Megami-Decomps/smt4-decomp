#include "map/MapEnemyGlobal.h"
extern "C" {
static __inline void restartFieldEnemy(MapEnemyEntryA *entry)
{
    entry->state = 1;
    entry->elapsed = 0;
}
/* Restarts eligible active entries that have no blocking request. */
void mapEnemyRestartActiveEntries(void)
{
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *entry = &g_mapEnemy->entries[index];
        if (entry->active != 0 && entry->kind != 0 && entry->kind < 11 &&
            entry->locked == 0 &&
            (entry->state == 0 || entry->state == 4 || entry->state == 5)) {
            restartFieldEnemy(entry);
        }
    }
}
}
