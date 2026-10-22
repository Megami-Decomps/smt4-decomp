/* NON_MATCHING: loop address formation, saved-register allocation and shared state-transition placement differ from retail. */
#include "map/mapEnemy.h"
#include <stddef.h>

typedef char CheckMapEnemyEntrySize[sizeof(MapEnemyEntry) == 0x180 ? 1 : -1];
typedef char CheckMapEnemyModelOffset[offsetof(MapEnemyEntry, render.model) == 0x178 ? 1 : -1];
typedef char CheckMapEnemyExtraOffset[offsetof(MapEnemy, extraModels) == 0x304c ? 1 : -1];
typedef char CheckMapEnemySize[sizeof(MapEnemy) == 0x30f4 ? 1 : -1];

extern "C" MapEnemy *g_mapEnemy;
extern "C" void asdMdlManagerMarkDestroy(AsdMdlObject *model);
extern "C" void asdMdlManagerDestroy(AsdMdlObject *model);
extern "C" void FUN_0021bea0();
extern "C" void FUN_001d3018();

static __inline void stopMapEnemyModels(MapEnemy *enemies)
{
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry *entry = &enemies->entries[i];
        if (entry->render.model && entry->render.registered) {
            if (entry->render.owned)
                asdMdlManagerMarkDestroy(entry->render.model);
            entry->render.registered = 0;
            entry->active = 0;
        }
    }
    for (s32 i = 0; i < 21; ++i) {
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
        if (entry->render.model) {
            if (entry->render.owned)
                asdMdlManagerDestroy(entry->render.model);
            entry->render.model = NULL;
            entry->render.owned = 0;
        }
    }
    enemies->render.modelCount = 0;
    for (s32 i = 0; i < 21; ++i) {
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
    switch (enemies->controller.state) {
    case 1:
        enemies->controller.state = 2;
        enemies->controller.elapsed = 0;
        break;
    case 3:
        FUN_0021bea0();
        enemies->controller.state = 7;
        enemies->controller.elapsed = 0;
        break;
    case 4:
        stopMapEnemyModels(enemies);
        ++enemies->controller.state;
        enemies->controller.elapsed = 0;
        break;
    case 5:
        releaseMapEnemyModels(enemies);
        ++enemies->controller.state;
        enemies->controller.elapsed = 0;
        break;
    case 6:
        FUN_0021bea0();
        enemies->controller.state = 8;
        enemies->controller.elapsed = 0;
        break;
    case 8:
        FUN_001d3018();
        break;
    case 9:
        stopMapEnemyModels(enemies);
        enemies->controller.state = 10;
        enemies->controller.elapsed = 0;
        break;
    case 10:
        releaseMapEnemyModels(enemies);
        enemies->controller.state = 0;
        enemies->controller.elapsed = 0;
        break;
    }
    return 0;
}
