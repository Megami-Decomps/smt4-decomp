/* NON_MATCHING: register allocation: retail spills the slot pointer, spawn index and list pointer around the inlined spawn block (three more stack slots, extra live registers) */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"

extern "C" {
u16 FUN_004bb870(s32 index);
}

/* Drops the slot's resource: unregisters it (or marks it released), then deletes it if the slot owns it. */
static __inline void enemySlotReleaseResource(MapEnemyEntryA *slot)
{
    MoriModelContent *resource = slot->model;
    if (resource != NULL && slot->registered != 0) {
        Obj557b18 *owner = resource->body;
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

/* Puts the slot in `state` and fills it from the current area's next spawn entry. */
static __inline void enemySlotSpawn(MapEnemyEntryA *slot, s32 state, s32 *spawnCount)
{
    slot->state = state;
    slot->elapsed = 0;
    u32 index = *spawnCount & 0xff;
    for (s32 i = 0; i < 16; i++) {
        MapEnemySpawnGroup *group = &g_mapEnemy->spawnGroups[i];
        if (group->owner == g_gameState.selectionArea) {
            enemySlotReleaseResource(slot);
            slot->result = group->encounterIds[index];
            slot->enemyId = group->enemyIds[index];
            slot->level = nkmEnemyFindById((u16)slot->enemyId)->level & 0x7fff;
            s32 variant = FUN_004bb870(slot->result);
            if (variant != 0) {
                slot->variant = (u8)variant;
            }
            slot->kind = group->kinds[index];
            break;
        }
    }
    ++*spawnCount;
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
                enemySlotSpawn(slot, 0x14, spawnCount);
                break;
            case 2:
                enemySlotSpawn(slot, 0x16, spawnCount);
                break;
            }
        }
    }
}
