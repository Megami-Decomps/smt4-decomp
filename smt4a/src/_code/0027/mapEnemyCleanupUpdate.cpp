/* NON_MATCHING: cleanup-loop register allocation and shared teardown branch merging differ from retail. */
#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *registry, void *owner);
void naviMainQueueRequest(s32 index);
void FUN_00303f48(void);
void FUN_00273060(void);

/* Advance the map-enemy teardown phases, unregistering resources before releasing them. */
s32 mapEnemyCleanupUpdate(u32 job)
{
    SceneCleanupOwner *owner = reinterpret_cast<SceneCleanupOwner *>(g_mapEnemy);
    switch (owner->state) {
    case 1:
        owner->state = 2;
        owner->time = 0;
        break;
    case 3:
        FUN_00303f48();
        owner->state = 7;
        owner->time = 0;
        break;
    case 4:
        for (s32 index = 0; index < 40; ++index) {
            SceneCleanupSlot *slot = &owner->slots[index];
            if (slot->resource != NULL && slot->registered != 0) {
                if (slot->owned != 0 && slot->resource->owner != NULL) {
                    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->owner);
                }
                slot->registered = 0;
                slot->active = 0;
                if (slot->effectPending != 0) {
                    naviMainQueueRequest(index);
                    slot->effectPending = 0;
                }
            }
        }
        for (s32 index = 0; index < 21; ++index) {
            SceneCleanupAuxiliary *entry = &owner->auxiliary[index];
            if (entry->resource != NULL && entry->registered != 0) {
                if (entry->resource->owner != NULL) {
                    ptrListRemoveClearOwner(g_handleRegistry, entry->resource->owner);
                }
                entry->registered = 0;
                entry->state = 0;
            }
        }
        ++owner->state;
        owner->time = 0;
        break;
    case 5:
        for (s32 index = 0; index < 40; ++index) {
            SceneCleanupSlot *slot = &owner->slots[index];
            if (slot->resource != NULL) {
                if (slot->owned != 0) {
                    delete slot->resource;
                    slot->resource = NULL;
                }
                slot->resource = NULL;
                slot->owned = 0;
            }
        }
        owner->auxiliaryCount = 0;
        for (s32 index = 0; index < 21; ++index) {
            SceneCleanupAuxiliary *entry = &owner->auxiliary[index];
            if (entry->resource != NULL) {
                delete entry->resource;
                entry->resource = NULL;
            }
        }
        ++owner->state;
        owner->time = 0;
        break;
    case 6:
        FUN_00303f48();
        owner->state = 8;
        owner->time = 0;
        break;
    case 8:
        FUN_00273060();
        break;
    case 9:
        for (s32 index = 0; index < 40; ++index) {
            SceneCleanupSlot *slot = &owner->slots[index];
            if (slot->resource != NULL && slot->registered != 0) {
                if (slot->owned != 0 && slot->resource->owner != NULL) {
                    ptrListRemoveClearOwner(g_handleRegistry, slot->resource->owner);
                }
                slot->registered = 0;
                slot->active = 0;
                if (slot->effectPending != 0) {
                    naviMainQueueRequest(index);
                    slot->effectPending = 0;
                }
            }
        }
        for (s32 index = 0; index < 21; ++index) {
            SceneCleanupAuxiliary *entry = &owner->auxiliary[index];
            if (entry->resource != NULL && entry->registered != 0) {
                if (entry->resource->owner != NULL) {
                    ptrListRemoveClearOwner(g_handleRegistry, entry->resource->owner);
                }
                entry->registered = 0;
                entry->state = 0;
            }
        }
        owner->state = 10;
        owner->time = 0;
        break;
    case 10:
        for (s32 index = 0; index < 40; ++index) {
            SceneCleanupSlot *slot = &owner->slots[index];
            if (slot->resource != NULL) {
                if (slot->owned != 0) {
                    delete slot->resource;
                    slot->resource = NULL;
                }
                slot->resource = NULL;
                slot->owned = 0;
            }
        }
        owner->auxiliaryCount = 0;
        for (s32 index = 0; index < 21; ++index) {
            SceneCleanupAuxiliary *entry = &owner->auxiliary[index];
            if (entry->resource != NULL) {
                delete entry->resource;
                entry->resource = NULL;
            }
        }
        owner->state = 0;
        owner->time = 0;
        break;
    }
    return 0;
}
}
