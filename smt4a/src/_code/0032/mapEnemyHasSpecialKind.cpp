#include "map/MapEnemyGlobal.h"

extern "C" {
// Report whether any active map enemy has kind zero or at least eleven.
u32 mapEnemyHasSpecialKind(void)
{
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *enemy = &g_mapEnemy->entries[index];
        if (enemy->active != 0 && (enemy->kind == 0 || enemy->kind >= 11)) {
            return 1;
        }
    }
    return 0;
}
}
