#include "gamedata/EncounterSelection.h"
/* NON_MATCHING: signed ownership flags, record lookup and the owned model's delete-and-clear (retail stores the NULL twice) recovered; remaining: the slot and record pointers swap r4/r5, and the build hoists model->body above the owned test (retail loads it in each arm), which also stops the registered test from being predicated. */
#include "shard/W4_Match1b_RegisteredHandle.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include "classes/Obj557b18.h"

extern "C" {

static __inline MapEnemySpawn *enemySelectionRecordForKind(u32 kind, s32 index)
{
    MapEnemyA *enemies = g_mapEnemy;
    MapEnemySpawn *record;
    if (kind == 1)
        record = &enemies->spawnTables[0].entries[index];
    else if (kind == 2)
        record = &enemies->spawnTables[1].entries[index];
    else if (kind == 3)
        record = &enemies->spawnTables[0].entries[index];
    else if (kind == 4)
        record = &enemies->spawnTables[2].entries[index];
    return record;
}

// Release the previous owned or borrowed model, then bind a matching enemy selection record.
void mapEnemyRebindModel(MapEnemyEntryA *slot, s32 id, u32 kind)
{
    // The caller supplies one of the four supported selection kinds.
    for (s32 index = 0; index < 16; ++index) {
        MapEnemySpawn *record = enemySelectionRecordForKind(kind, index);
        if (record->owner != id)
            continue;
        if (slot->model != NULL && slot->registered != 0) {
            if (slot->owned != 0) {
                if (slot->model->body != NULL)
                    ptrListRemoveClearOwner(g_handleRegistry, slot->model->body);
                slot->registered = 0;
            } else {
                slot->model->body->flags |= 3;
                slot->registered = 0;
                g_mapEnemy->extraModels[slot->kind].active = 0;
            }
        }
        MapEnemyA *pool = g_mapEnemy;
        if (slot->model != NULL) {
            if (slot->owned != 0) {
                delete slot->model;
                slot->model = NULL;
            }
            slot->model = NULL;
            slot->active = 0;
            slot->behavior = 0;
            slot->targetIndex = -1;
            slot->moveMode = 1;
            slot->flag13C = 0;
            slot->flag13D = 0;
            slot->flag13F = 0;
            slot->flag140 = 0;
            --pool->modelCount;
        }
        slot->result = record->encounterId;
        slot->enemyId = record->enemyId;
        NkmEnemyRecordA *unit = nkmEnemyFindById((u16)slot->enemyId);
        slot->level = unit->level & 0x7FFF;
        s32 variant = FUN_004bb870(slot->result);
        if (variant != 0)
            slot->variant = variant;
        slot->kind = record->kind;
        return;
    }
}
}
