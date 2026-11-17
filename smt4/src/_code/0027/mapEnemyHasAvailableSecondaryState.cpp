#include "map/MapEnemyGlobal.h"

extern "C" {

// Finds an active field enemy whose kind is zero or at least eleven.
u32 mapEnemyHasAvailableSecondaryState(void)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry* entry = &g_mapEnemy->entries[i];
        if (entry->active != 0 && (entry->kind == 0 || entry->kind >= 11)) {
            return 1;
        }
    }
    return 0;
}
}
