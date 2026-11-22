/* NON_MATCHING: the stop and release phases are the two helpers of the IV twin FUN_001d9294 (each reads g_mapEnemy itself; IV is IDENTICAL with them); only the case-9 copy of the stop loop differs: retail keeps the model in r1 and the flags in r0 there, the reverse of the case-4 copy, where armcc here allocates both copies alike. */
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "map/MapSceneAccess.h"
#include "Model/MoriModelManager.h"

extern "C" {
void FUN_00303f48(void);
void FUN_00273060(void);

/* Unregisters every enemy model and shared kind model (they are released on a later step). */
static __inline void stopMapEnemyModels()
{
    MapEnemyA *owner = g_mapEnemy;
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *slot = &owner->entries[index];
        if (slot->model != NULL && slot->registered != 0) {
            if (slot->owned != 0 && slot->model->body != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, slot->model->body);
            }
            slot->registered = 0;
            slot->active = 0;
            if (slot->effectPending != 0) {
                naviMainQueueRequest(index);
                slot->effectPending = 0;
            }
        }
    }
    for (s32 index = 0; index < MAP_ENEMY_EXTRA_MODEL_COUNT; ++index) {
        MapEnemyExtraModelA *entry = &owner->extraModels[index];
        if (entry->model != NULL && entry->registered != 0) {
            if (entry->model->body != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, entry->model->body);
            }
            entry->registered = 0;
            entry->active = 0;
        }
    }
}

/* Releases the enemy models and the shared kind models and forgets them. */
static __inline void releaseMapEnemyModels()
{
    MapEnemyA *owner = g_mapEnemy;
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *slot = &owner->entries[index];
        if (slot->model != NULL) {
            if (slot->owned != 0) {
                delete slot->model;
                slot->model = NULL;
            }
            slot->model = NULL;
            slot->owned = 0;
        }
    }
    owner->modelCount = 0;
    for (s32 index = 0; index < MAP_ENEMY_EXTRA_MODEL_COUNT; ++index) {
        MapEnemyExtraModelA *entry = &owner->extraModels[index];
        if (entry->model != NULL) {
            delete entry->model;
            entry->model = NULL;
        }
    }
}

/* Advance the map-enemy teardown phases, unregistering resources before releasing them. */
s32 mapEnemyCleanupUpdate(u32 job)
{
    MapEnemyA *owner = g_mapEnemy;
    switch (owner->state) {
    case 1:
        owner->state = 2;
        owner->elapsed = 0;
        break;
    case 3:
        FUN_00303f48();
        owner->state = 7;
        owner->elapsed = 0;
        break;
    case 4:
        stopMapEnemyModels();
        ++owner->state;
        owner->elapsed = 0;
        break;
    case 5:
        releaseMapEnemyModels();
        ++owner->state;
        owner->elapsed = 0;
        break;
    case 6:
        FUN_00303f48();
        owner->state = 8;
        owner->elapsed = 0;
        break;
    case 8:
        FUN_00273060();
        break;
    case 9:
        stopMapEnemyModels();
        owner->state = 10;
        owner->elapsed = 0;
        break;
    case 10:
        releaseMapEnemyModels();
        owner->state = 0;
        owner->elapsed = 0;
        break;
    }
    return 0;
}
}
