#include "map/mapEnemy.h"

extern "C" {
extern MapEnemy* g_mapEnemy;

// Finds an active field enemy whose secondary state is zero or at least eleven.
u32 mapEnemyHasAvailableSecondaryState(void)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry* entry = &g_mapEnemy->entries[i];
        if (entry->active != 0 && (entry->unk174 == 0 || entry->unk174 >= 11)) {
            return 1;
        }
    }
    return 0;
}
}
