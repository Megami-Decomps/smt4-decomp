/* NON_MATCHING: vector argument base registers and evaluation order differ from retail. */
#include "map/mapEnemy.h"
#include "shard/W5_W5Match7_SceneState.h"

extern "C" MapEnemy *g_mapEnemy;
extern "C" f32 mathDistanceBetweenPoints(f32 ax, f32 ay, f32 az, f32 bx, f32 by, f32 bz);

/* Test whether this marked enemy outranks every other marked enemy by adjusted distance. */
extern "C" u32 FUN_00253ba0(MapEnemyEntry *enemy)
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
    f32 distance = mathDistanceBetweenPoints(g_lmapScene->position.x, g_lmapScene->position.y,
        g_lmapScene->position.z, position->target.x, position->target.y, position->target.z);
    if (enemy->state == 2) {
        distance += 300.0f;
    }
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *candidate = &enemies->entries[index];
        if (candidate->active && candidate->unk7D) {
            position = reinterpret_cast<EnemyPositionView *>(candidate);
            f32 candidateDistance = mathDistanceBetweenPoints(g_lmapScene->position.x, g_lmapScene->position.y,
                g_lmapScene->position.z, position->position.x, position->position.y, position->position.z);
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
