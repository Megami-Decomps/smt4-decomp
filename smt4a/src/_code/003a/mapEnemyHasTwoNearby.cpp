#include "map/LmapGlobals.h"
#include "map/MapEnemyGlobal.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

/* Returns whether at least two active enemies (not in mode 2) are within 200 units of the map scene. */
u32 mapEnemyHasTwoNearby(void)
{
    MapEnemyA *enemies = g_mapEnemy;
    s32 near = 0;
    s32 i;

    for (i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *enemy = &enemies->entries[i];
        if (enemy->active != 0 && enemy->state != 2) {
            f32 distance = distSpatial(g_lmapScene->pose.position, enemy->position);
            if (distance <= 200.0f) {
                near++;
            }
        }
    }
    return near >= 2;
}

} /* extern "C" */
