/* NON_MATCHING: the per-slot field stores are written in field order rather than retail's interleaved order; the stores compile with different grouping and register use than retail. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

void *asdMemoryAllocTracked(u32 size, u32 alignment, u32 a, u32 b, u32 c);
u32 taskCreateDraw(const s8 *name, s32 group, u16 startDelay, u16 endDelay,
                   AsdProcUpdateFunc draw, AsdProcFunc release, u32 work, void *owner);
s32 randRange(u32 limit);
s32 mapEnemyCleanupUpdate(u32 job);
void mapEnemyRelease(u32 job);

/* Creates the map enemy manager: allocates its block, starts the draw task and resets the 40
 * enemy slots, the small and cleared record tables and the reference tables. */
void FUN_00232d58(u32 parent)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 519);
    MapEnemyA *enemy = (MapEnemyA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(MapEnemyA), 1);

    g_mapEnemy = enemy;
    enemy->task = taskCreateDraw(reinterpret_cast<const s8 *>("MENEMY"), 4, 0, 0, mapEnemyCleanupUpdate, mapEnemyRelease, 0,
                                 reinterpret_cast<void *>(parent));
    enemy->state = 0;
    enemy->elapsed = 0;
    enemy->requestArgs[0] = 0;
    enemy->requestArgs[1] = 0;
    enemy->unk3D74 = 0;
    enemy->modelCount = 0;
    enemy->activeCount = 0;
    enemy->unk3D80 = 0;
    enemy->flags3D88[0] = 0;
    enemy->flags3D88[1] = 0;
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; index++) {
        MapEnemyEntryA *slot = &enemy->entries[index];

        slot->active = 0;
        slot->index = index;
        slot->basePosition.x = 0;
        slot->basePosition.y = 0;
        slot->basePosition.z = 0;
        slot->previousPosition.x = slot->basePosition.x;
        slot->previousPosition.y = slot->basePosition.y;
        slot->previousPosition.z = 0;
        slot->position.x = 0;
        slot->position.y = 0;
        slot->position.z = 0;
        slot->heading = 0;
        slot->behavior = 0;
        slot->targetIndex = -1;
        slot->moveMode = 1;
        slot->targetDistance = 100000.0f;
        slot->eventEnabled = 0;
        slot->markerIndex = 0;
        slot->mapId = 0;
        slot->count = 0;
        slot->value = 0;
        slot->scriptMode = 0;
        slot->message = 0;
        slot->messageArgument = 0;
        slot->result = 0;
        slot->enemyId = 0;
        slot->unk078 = 1;
        slot->hasMarker = 0;
        slot->locked = 0;
        slot->inView = 0;
        slot->state = 0;
        slot->elapsed = 0;
        slot->randomDelay = randRange(200) + 0x3C;
        slot->unk090 = 0;
        slot->timer138 = 0;
        slot->timer13A = 0;
        slot->flag13C = 0;
        slot->flag13D = 0;
        slot->flag13E = 0;
        slot->flag13F = 0;
        slot->flag140 = 0;
        slot->tracking = 0;
        slot->blinkTimer = 0;
        slot->onRadar = 0;
        slot->playerDistance = 0;
        slot->unk170 = 0;
        slot->level = 999;
        slot->unk176 = 0;
        slot->effectPending = 0;
        slot->variant = 1;
        slot->kind = 0;
        slot->model = NULL;
        slot->registered = 0;
        slot->owned = 0;
    }
    for (s32 index = 0; index < MAP_ENEMY_EXTRA_MODEL_COUNT; index++) {
        MapEnemyExtraModelA *pair = &enemy->extraModels[index];

        pair->model = NULL;
        pair->registered = 0;
        pair->active = 0;
    }
    for (s32 index = 0; index < 16; index++) {
        MapEnemySpawnGroup *block = &enemy->spawnGroups[index];

        block->owner = -1;
        block->encounterIds[0] = 0;
        block->encounterIds[1] = 0;
        block->encounterIds[2] = 0;
        block->encounterIds[3] = 0;
        block->encounterIds[4] = 0;
        block->encounterIds[5] = 0;
        block->encounterIds[6] = 0;
        block->encounterIds[7] = 0;
        block->encounterIds[8] = 0;
        block->encounterIds[9] = 0;
        block->encounterIds[10] = 0;
        block->encounterIds[11] = 0;
        block->encounterIds[12] = 0;
        block->encounterIds[13] = 0;
        block->encounterIds[14] = 0;
        block->encounterIds[15] = 0;
        block->enemyIds[0] = 0;
        block->enemyIds[1] = 0;
        block->enemyIds[2] = 0;
        block->enemyIds[3] = 0;
        block->enemyIds[4] = 0;
        block->enemyIds[5] = 0;
        block->enemyIds[6] = 0;
        block->enemyIds[7] = 0;
        block->enemyIds[8] = 0;
        block->enemyIds[9] = 0;
        block->enemyIds[10] = 0;
        block->enemyIds[11] = 0;
        block->enemyIds[12] = 0;
        block->enemyIds[13] = 0;
        block->enemyIds[14] = 0;
        block->enemyIds[15] = 0;
        block->kinds[0] = 0;
        block->kinds[1] = 0;
        block->kinds[2] = 0;
        block->kinds[3] = 0;
        block->kinds[4] = 0;
        block->kinds[5] = 0;
        block->kinds[6] = 0;
        block->kinds[7] = 0;
        block->kinds[8] = 0;
        block->kinds[9] = 0;
        block->kinds[10] = 0;
        block->kinds[11] = 0;
        block->kinds[12] = 0;
        block->kinds[13] = 0;
        block->kinds[14] = 0;
        block->kinds[15] = 0;
    }
    enemy->spawnIndex = 0;
    for (s32 index = 0; index < 16; index++) {
        MapEnemySpawn *ref = &enemy->spawnTables[0].entries[index];

        ref->owner = -1;
        ref->encounterId = 0;
        ref->enemyId = 0;
        ref->kind = 0;
    }
    enemy->spawnTables[0].count = 0;
    for (s32 index = 0; index < 16; index++) {
        MapEnemySpawn *ref = &enemy->spawnTables[1].entries[index];

        ref->owner = -1;
        ref->encounterId = 0;
        ref->enemyId = 0;
        ref->kind = 0;
    }
    enemy->spawnTables[1].count = 0;
    for (s32 index = 0; index < 16; index++) {
        MapEnemySpawn *ref = &enemy->spawnTables[2].entries[index];

        ref->owner = -1;
        ref->encounterId = 0;
        ref->enemyId = 0;
        ref->kind = 0;
    }
    enemy->spawnTables[2].count = 0;
}

}
