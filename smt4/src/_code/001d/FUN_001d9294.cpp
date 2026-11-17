/* NON_MATCHING: loop address formation, saved-register allocation and shared state-transition placement differ from retail. */
#include "map/MapEnemyGlobal.h"

extern "C" void asdMdlManagerMarkDestroy(AsdMdlObject *model);
extern "C" void asdMdlManagerDestroy(AsdMdlObject *model);
extern "C" void FUN_0021bea0();
extern "C" void FUN_001d3018();

static __inline void stopMapEnemyModels(MapEnemy *enemies)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry *entry = &enemies->entries[i];
        if (entry->model && entry->registered) {
            if (entry->owned)
                asdMdlManagerMarkDestroy(entry->model);
            entry->registered = 0;
            entry->active = 0;
        }
    }
    for (s32 i = 0; i < MAP_ENEMY_EXTRA_MODEL_COUNT; ++i) {
        MapEnemyExtraModel *entry = &enemies->extraModels[i];
        if (entry->model && entry->registered) {
            asdMdlManagerMarkDestroy(entry->model);
            entry->registered = 0;
            entry->active = 0;
        }
    }
}

static __inline void releaseMapEnemyModels(MapEnemy *enemies)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry *entry = &enemies->entries[i];
        if (entry->model) {
            if (entry->owned)
                asdMdlManagerDestroy(entry->model);
            entry->model = NULL;
            entry->owned = 0;
        }
    }
    enemies->modelCount = 0;
    for (s32 i = 0; i < MAP_ENEMY_EXTRA_MODEL_COUNT; ++i) {
        MapEnemyExtraModel *entry = &enemies->extraModels[i];
        if (entry->model) {
            asdMdlManagerDestroy(entry->model);
            entry->model = NULL;
        }
    }
}

// Advance enemy shutdown and release phases, preserving the restart and final-stop paths.
extern "C" s32 FUN_001d9294()
{
    MapEnemy *enemies = g_mapEnemy;
    switch (enemies->state) {
    case 1:
        enemies->state = 2;
        enemies->elapsed = 0;
        break;
    case 3:
        FUN_0021bea0();
        enemies->state = 7;
        enemies->elapsed = 0;
        break;
    case 4:
        stopMapEnemyModels(enemies);
        ++enemies->state;
        enemies->elapsed = 0;
        break;
    case 5:
        releaseMapEnemyModels(enemies);
        ++enemies->state;
        enemies->elapsed = 0;
        break;
    case 6:
        FUN_0021bea0();
        enemies->state = 8;
        enemies->elapsed = 0;
        break;
    case 8:
        FUN_001d3018();
        break;
    case 9:
        stopMapEnemyModels(enemies);
        enemies->state = 10;
        enemies->elapsed = 0;
        break;
    case 10:
        releaseMapEnemyModels(enemies);
        enemies->state = 0;
        enemies->elapsed = 0;
        break;
    }
    return 0;
}
