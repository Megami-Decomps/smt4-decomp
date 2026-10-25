#include "map/mapEnemy.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" MapEnemy *g_mapEnemy;
extern "C" f32 mathDistanceBetweenPoints(MapVector first, MapVector second);

/* Test whether this marked enemy outranks every other marked enemy by adjusted distance. */
extern "C" u32 mapEnemyIsClosestMarkedByAdjustedDistance(MapEnemyEntry *enemy)
{
    /* Aligned position fields cannot be added to the entry's byte-aligned prefix union. */
    struct EnemyPositionView {
        u8 unk00[8];
        MapVector position;
        u8 unk14[0xC];
        MapVector target;
    };
    MapEnemy *enemies = g_mapEnemy;
    if (!enemy->unk7D) {
        return 0;
    }
    EnemyPositionView *position = reinterpret_cast<EnemyPositionView *>(enemy);
    f32 distance = mathDistanceBetweenPoints(g_lmapScene->position, position->target);
    if (enemy->state == 2) {
        distance += 300.0f;
    }
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *candidate = &enemies->entries[index];
        if (candidate->active && candidate->unk7D) {
            position = reinterpret_cast<EnemyPositionView *>(candidate);
            f32 candidateDistance = mathDistanceBetweenPoints(g_lmapScene->position, position->position);
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
