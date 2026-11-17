#include "map/MapEnemyGlobal.h"
#include "map/mapDepart.h"
#include "map/SceneSpawn.h"

extern "C" const SceneSpawnTableRecord *dataTable29GetEntryWithAoc(s32 index);

/* Move the first eligible idle field enemy to a table-defined point. */
extern "C" void FUN_001f90c4(s32 pointId)
{
    MapEnemy *enemies = g_mapEnemy;
    const SceneSpawnTableRecord *record = dataTable29GetEntryWithAoc(pointId);
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *entry = &enemies->entries[index];
        if (entry->active && entry->kind != 0 && entry->kind < 11 &&
            !entry->locked && entry->state == 2) {
            entry->basePosition.x = (f32)record->point.x;
            entry->basePosition.y = (f32)record->point.y;
            entry->basePosition.z = (f32)record->point.z;
            entry->heading = (f32)record->point.heading;
            entry->position = entry->basePosition;
            entry->state = 24;
            entry->elapsed = 0;
            return;
        }
    }
}
