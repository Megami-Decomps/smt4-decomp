/* NON_MATCHING: only the order of the two vector loads before distSpatial: retail loads the enemy vector, then the scene pointer and vector; the build loads the scene pointer first. */
#include "map/LmapGlobals.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

f32 distSpatial(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);

/* Returns whether at least two active enemies (not in mode 2) are within 200 units of the map scene. */
u32 FUN_003ae088(void)
{
    MapEnemyA *enemies = g_mapEnemy;
    s32 near = 0;
    s32 i;

    for (i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *enemy = &enemies->entries[i];
        if (enemy->active != 0 && enemy->state != 2) {
            f32 distance = distSpatial(g_lmapScene->pose.position.x, g_lmapScene->pose.position.y,
                                       g_lmapScene->pose.position.z, enemy->position.x, enemy->position.y,
                                       enemy->position.z);
            if (distance <= 200.0f) {
                near++;
            }
        }
    }
    return near >= 2;
}

} /* extern "C" */
