/* NON_MATCHING: task setup and stores now match; only the position-to-previousPosition copy in the entry loop uses r0/r1 the other way round (retail: ldm r1, {r1, r2}; stm r0). */
#include "map/MapEnemyGlobal.h"
#include "sys/Task.h"
#include "shard/S1Mover.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "gamedata/DataTable.h"
#include "util/Random.h"

extern "C" {
u32 taskCreateDraw(const char *name, u16 priority, u8 list, u32 bytes,
                   TaskFunc update, TaskFunc destroy, void *work, u32 parent);
s32 FUN_001d9294();
void mapEnemyFreeWork();

void MapEnemy_Register(u32 parent)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\mapEnemy.cpp", 308);
    g_mapEnemy = static_cast<MapEnemy *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MapEnemy), 1));
    MapEnemy *work = g_mapEnemy;
    work->task = taskCreateDraw("MENEMY", 2, 0, 0,
        reinterpret_cast<TaskFunc>(FUN_001d9294), reinterpret_cast<TaskFunc>(mapEnemyFreeWork), NULL, parent);
    work->state = 0;
    work->elapsed = 0;
    work->requestArgs[0] = 0;
    work->requestArgs[1] = 0;
    work->unk3034 = 0;
    work->modelCount = 0;
    work->activeCount = 0;
    work->unk3040 = 0;
    work->flags3048[0] = 0;
    work->flags3048[1] = 0;
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry *entry = &work->entries[index];
        entry->active = 0;
        entry->index = index;
        entry->basePosition.x = 0.0f;
        entry->basePosition.y = 0.0f;
        entry->basePosition.z = 0.0f;
        entry->previousPosition = entry->basePosition;
        entry->position.x = 0.0f;
        entry->position.y = 0.0f;
        entry->position.z = 0.0f;
        entry->heading = 0.0f;
        entry->behavior = 0;
        entry->targetIndex = -1;
        entry->moveMode = 1;
        entry->targetDistance = 99999.0f;
        entry->eventEnabled = 0;
        entry->markerIndex = 0;
        entry->mapId = 0;
        entry->count = 0;
        entry->value = 0;
        entry->scriptMode = 0;
        entry->message = 0;
        entry->messageArgument = 0;
        entry->result = 0;
        entry->enemyId = 0;
        entry->unk078 = 1;
        entry->hasMarker = 0;
        entry->locked = 0;
        entry->inView = 0;
        entry->state = 0;
        entry->elapsed = 0;
        entry->randomDelay = randNextInRange(100) + 30;
        entry->unk090 = 0;
        entry->unk16C = 0;
        entry->flag13C = 0;
        entry->flag13D = 0;
        entry->timer138 = 0;
        entry->timer13A = 0;
        entry->tracking = 0;
        entry->blinkTimer = 0;
        entry->onRadar = 0;
        entry->playerDistance = 0.0f;
        entry->kind = 0;
        entry->level = 999;
        entry->model = NULL;
        entry->registered = 0;
        entry->owned = 0;
    }
    for (s32 index = 0; index < MAP_ENEMY_EXTRA_MODEL_COUNT; ++index) {
        MapEnemyExtraModel *entry = &work->extraModels[index];
        entry->model = NULL;
        entry->registered = 0;
        entry->active = 0;
    }
}
}
