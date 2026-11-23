#include "gamedata/EncounterSelection.h"
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"

/* Rebinding a slot first unregisters its model, then drops the resource. These are the same
 * two lifetime steps that the spawn-table binder (FUN_00377acc) performs. */

/* Unregisters the slot's model: an owned model leaves the handle registry, a borrowed extra model is
 * flagged released and its extra-model entry freed. */
static __inline void mapEnemySlotUnregisterModel(MapEnemyEntryA *slot)
{
    if (slot->model != NULL && slot->registered != 0) {
        Obj557b18 *owner = slot->model->body;
        if (slot->owned != 0) {
            if (owner != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, owner);
            }
            slot->registered = 0;
        } else {
            owner->flags |= 3;
            slot->registered = 0;
            g_mapEnemy->extraModels[slot->kind].active = 0;
        }
    }
}

/* Deletes the slot's model if the slot owns it, then frees the slot. */
static __inline void mapEnemySlotDropModel(MapEnemyEntryA *slot)
{
    MapEnemyA *list = g_mapEnemy;
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
        list->modelCount--;
    }
}

/* Drops the slot's model and fills the slot from entry `index` of the spawn group `area` owns
 * (FUN_00377acc does the same from a spawn table). */
static __inline void enemySlotSpawn(MapEnemyEntryA *slot, s32 area, u8 index)
{
    for (s32 i = 0; i < 16; i++) {
        MapEnemySpawnGroup *group = &g_mapEnemy->spawnGroups[i];
        if (group->owner == area) {
            mapEnemySlotUnregisterModel(slot);
            mapEnemySlotDropModel(slot);
            slot->result = group->encounterIds[index];
            slot->enemyId = group->enemyIds[index];
            NkmEnemyRecordA *unit = nkmEnemyFindById((u16)slot->enemyId);
            slot->level = unit->level & 0x7fff;
            s32 variant = FUN_004bb870(slot->result);
            if (variant != 0) {
                slot->variant = (u8)variant;
            }
            slot->kind = group->kinds[index];
            break;
        }
    }
}

/* Assigns every idle enemy slot its next spawn entry for the current area. */
extern "C" void FUN_0033ad04(void)
{
    MapEnemyA *list = g_mapEnemy;
    s32 *spawnCount = &list->spawnIndex;
    list->spawnAttempts = 0;
    for (s32 i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *slot = &list->entries[i];
        if (slot->active != 0 && slot->kind != 0 && slot->kind < 11 && slot->locked == 0 &&
            *spawnCount < 16) {
            switch (slot->state) {
            case 0:
            case 4:
            case 5:
                slot->state = 0x14;
                slot->elapsed = 0;
                enemySlotSpawn(slot, g_gameState.selectionArea, *spawnCount & 0xff);
                ++*spawnCount;
                break;
            case 2:
                slot->state = 0x16;
                slot->elapsed = 0;
                enemySlotSpawn(slot, g_gameState.selectionArea, *spawnCount & 0xff);
                ++*spawnCount;
                break;
            }
        }
    }
}
