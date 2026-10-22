/* NON_MATCHING: vector-copy base registers and store scheduling differ from retail. */
#include "map/mapEnemy.h"
#include "map/mapDepart.h"
#include "map/SceneSpawn.h"

extern "C" MapEnemy *g_mapEnemy;
extern "C" const SceneSpawnTableRecord *dataTable29GetEntryWithAoc(s32 index);

/* Move the first eligible idle field enemy to a table-defined point. */
extern "C" void FUN_001f90c4(s32 pointId)
{
    /* Adding aligned vectors to MapEnemyEntry's byte-aligned prefix union would shift it. */
    struct EnemyTransformView {
        u8 unk00[8];
        MapVector position;
        u8 unk14[0xC];
        MapVector target;
        f32 heading;
    };
    MapEnemy *enemies = g_mapEnemy;
    const SceneSpawnTableRecord *record = dataTable29GetEntryWithAoc(pointId);
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *entry = &enemies->entries[index];
        if (entry->active && entry->unk174 != 0 && entry->unk174 < 11 &&
            !entry->unk7D && entry->state == 2) {
            EnemyTransformView *transform = reinterpret_cast<EnemyTransformView *>(entry);
            transform->position.x = (f32)record->point.x;
            transform->position.y = (f32)record->point.y;
            transform->position.z = (f32)record->point.z;
            transform->heading = (f32)record->point.heading;
            transform->target = transform->position;
            entry->state = 24;
            entry->unk88 = 0;
            return;
        }
    }
}
