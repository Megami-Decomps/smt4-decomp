#include "map/MapEnemyGlobal.h"
#include "map/LmapGlobals.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" f32 mathDistanceBetweenPoints(MapVector first, MapVector second);

/* Test whether this marked enemy outranks every other marked enemy by adjusted distance. */
extern "C" u32 mapEnemyIsClosestMarkedByAdjustedDistance(MapEnemyEntry *enemy)
{
    MapEnemy *enemies = g_mapEnemy;
    if (!enemy->locked) {
        return 0;
    }
    f32 distance = mathDistanceBetweenPoints(g_lmapScene->pose.position, enemy->position);
    if (enemy->state == 2) {
        distance += 300.0f;
    }
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *candidate = &enemies->entries[index];
        if (candidate->active && candidate->locked) {
            f32 candidateDistance = mathDistanceBetweenPoints(g_lmapScene->pose.position, candidate->basePosition);
            if (candidate->state == 2) {
                candidateDistance += 300.0f;
            }
            if (candidateDistance < distance) {
                return 0;
            }
        }
    }
    return 1;
}
