#include "shard/W6_W6Match1_EnemyPosition.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

EnemyPosition mapEnemyGetEncounterTargetPosition(void)
{
    EnemyPosition position;
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        const MapEnemyEntryA *enemy = &g_mapEnemy->entries[index];
        if (enemy->active != 0 && (enemy->state == 31 || enemy->state == 30)) {
            /* EnemyPosition is the result type of MapVector layout; copying it whole keeps retail's vldmia. */
            return *reinterpret_cast<const EnemyPosition *>(&enemy->position);
        }
    }
    return position;
}
}
